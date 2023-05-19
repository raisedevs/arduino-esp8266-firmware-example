# Raise.dev Arduino ESP8266 Firmware Example

[Raise.dev](https://raise.dev)'s Arduino ESP8266 firmware example for using [raise-dev-library](https://github.com/raisedevs/raise-dev-library) and [raisedevs/version-upload-action](https://github.com/raisedevs/version-upload-action).

## Usage

You can use this repository as a template to create your own firmware project using the Raise.dev Console.

GitHub Actions secrets are used to manage WiFi credentials.
When doing local development with the [PlatformIO IDE for VSCode](https://platformio.org/install/ide?install=vscode) (recommended) or the [PlatformIO Core (CLI)](https://docs.platformio.org/en/stable/core/index.html), you'll need to manually add the `include/wifi_credentials.h` file with contents like:

```c
#define WIFI_SSID "Your WiFi Network"
#define WIFI_PASSWORD "your-wifi-network-password"
```

---

If you have any problems: contact [Mike](mailto:mike@raise.dev) and he'll help.

## Status

Alpha and in active development.

## Contact

[Mike McQuaid](mailto:mike@raise.dev)

## License

Licensed under the [MIT License](https://en.wikipedia.org/wiki/MIT_License).
The full license text is available in [LICENSE.txt](https://github.com/raisedevs/raise-dev-library/blob/master/LICENSE.txt).
