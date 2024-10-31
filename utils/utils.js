// Arquivo utilitario, ta em js porque nao precisa ficar dando os pulo do c++

// Tamanho do campo
// TODO fazer isso baseado num json
var fieldWidth = 800
var fieldHeight = 600

// Adjust to the actual minimum and maximum ranges of the vision system data
// TODO fazer isso baseado num json
var minX = -2250
var maxX = 2250
var minY = -1500
var maxY = 1500

// Map X coordinate
function mapToFieldX(coord, maxSize) {
    var range = maxX - minX;
    return (coord - minX) / range * maxSize;
}

// Map Y coordinate with inversion
function mapToFieldY(coord, maxSize) {
    var range = maxY - minY;
    return maxSize - ((coord - minY) / range * maxSize);  // Invert Y-axis
}
