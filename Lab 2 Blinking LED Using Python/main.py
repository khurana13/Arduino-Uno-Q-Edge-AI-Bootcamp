import time
from arduino.app_utils import App

led1 = "/sys/class/leds/red:user/brightness"


def set_led_state(led_file, value):
    with open(led_file, "w") as file:
        file.write(str(value))


set_led_state(led1, 0)


def loop():
    set_led_state(led1, 1)
    time.sleep(1)

    set_led_state(led1, 0)
    time.sleep(1)


App.run(user_loop=loop)
