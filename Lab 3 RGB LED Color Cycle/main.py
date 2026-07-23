import time
from arduino.app_utils import App, Leds


def loop():
    # Red LED
    Leds.set_led1_color(1, 0, 0)
    time.sleep(1)

    # Green LED
    Leds.set_led1_color(0, 1, 0)
    time.sleep(1)

    # Blue LED
    Leds.set_led1_color(0, 0, 1)
    time.sleep(1)


App.run(user_loop=loop)
