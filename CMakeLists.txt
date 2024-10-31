cmake_minimum_required(VERSION 3.16)

project(RedRefC VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)
find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
qt_standard_project_setup(REQUIRES 6.5)


include_directories(${Protobuf_INCLUDE_DIRS})
# Add executable
qt_add_executable(appRedRefC
    main.cpp
)


# Add the QML module
qt_add_qml_module(appRedRefC
    URI RedRefC
    VERSION 1.0
    QML_FILES
        Main.qml
        qml/GalleryMenuButton.ui.qml
        qml/Robo_view.qml
        qml/RobotStatusDelegate.qml
        qml/FontManager.qml
        qml/FieldMap.qml
        utils/utils.js
    SOURCES
        robot.h
        RobotManager.h
        proto_listener.h
        proto_listener.cpp


)



# Specify Protobuf source files
set(PROTO_SRCS
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_eletro_UI.pb.cc
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_detection.pb.cc
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_geometry.pb.cc
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_wrapper.pb.cc
)

# Specify Protobuf header files
set(PROTO_HDRS
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_detection.pb.h
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_geometry.pb.h
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_eletro_UI.pb.h
    ${CMAKE_SOURCE_DIR}/communication/protobuf/ssl_vision_wrapper.pb.h
)

# Add Protobuf generated files to the target
target_sources(appRedRefC PRIVATE ${PROTO_SRCS} ${PROTO_HDRS})


# Add resources (e.g., images) via the .qrc file
qt_add_resources(appRedRefC "resources"
    PREFIX "/"
    FILES
        src/img/logo-vermelha2.png # Point to the images in the "src" folder
        )

# Set properties for macOS and Windows bundling
set_target_properties(appRedRefC PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Link to Qt libraries
target_link_libraries(appRedRefC
    PRIVATE Qt6::Quick
    ${Protobuf_LIBRARIES}
)

# Install target
include(GNUInstallDirs)
install(TARGETS appRedRefC
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
