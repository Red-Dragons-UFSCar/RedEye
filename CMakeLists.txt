cmake_minimum_required(VERSION 3.16)

project(RedRefC VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

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
        qml/GalleryMenuButton.ui.qml  # Point to the QML files in the "qml" folder
        qml/Robo_view.qml
        qml/RobotStatusDelegate.qml
        qml/FontManager.qml
        SOURCES robot.h
        SOURCES RobotManager.h
)

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
)

# Install target
include(GNUInstallDirs)
install(TARGETS appRedRefC
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
