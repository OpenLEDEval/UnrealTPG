# ETC_TestPatterns

This project was initially developed by [christiannng](https://github.com/christiannng) and [Josh Kerekes](https://github.com/joshkerekes). It implements a very simple test pattern generator developed by ICVFX developers based on [Unreal Engine 5.2](https://www.unrealengine.com/en-US). The project uses multiple blueprints and the RemoteControl extension to open up a JSON api to control the output color of the game window. It has been validated on Windows 11 with NVIDIA Quadro P2000 (On a ThinkPad laptop) to accurate output 10bit RGB HDMI testpatterns. 

A few notes...
1) The game is not configured to use HDR meaning that the back buffer of the output is determined by the desktop bit depth configured in NVIDIA desktop. _After connecting the LED processor HDMI input_, make the following changes:
    1) Under Display > Change resolution:
        1) Make sure to select "SDR 30 bits"
        2) change output color depth to "10 bits"
        3) color format to "RGB"
        4) output dynamic range to "Full".
2) The game engine is listening on port 30010 for TPG commands. Check that this is allowed in your firewall settings
3) It's highly reccomended to use a "caffine" program for your test pattern computer to prefent it from sleeping.
    1) (Amphetamine for Windows)[https://apps.microsoft.com/detail/9NBLGGH4WHSP?hl=en-us&gl=US]
    2) After starting amphetmine, put it in compact mode and then click back on the unreal editor window.

A more detailed guide may be added in the future and help is GREATLY appreciated for making a guide / video / or sharing any notes from your experiences installing this project.
