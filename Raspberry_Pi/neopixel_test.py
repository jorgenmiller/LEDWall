import board
import neopixel

pixels = neopixel.NeoPixel(
    pin = board.D18,             # D10, D12, D18 or D21
    n = 300, 
    brightness = 0.2,            # 0.0 to 1.0
    pixel_order = neopixel.RGB
)

RED = 0x100000
#RED = (255, 0, 0)

pixels[0] = RED
#pixels.fill(RED)

