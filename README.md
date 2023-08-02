# USED LIBRARY
PDFGen <br />
https://github.com/AndreRenaud/PDFGen

# DEPENDENCIES
https://github.com/FF-Projects-UE/ExtendedVars

# TARGET PLATFORM
* It currently works on Windows platform.
* Android platform is exprimental.
* It supports only <b>latest released version of Unreal Engine</b>. We can't help you if you want to use older ones. Moving to latest version takes approximately one month.

# IMPORTANT FOR IMAGE INSERT
In order to insert images to PDF files in runtime, you have to do these changes for your textures. Because currently DXT textures aren't supported in runtime. But you can use them for editor-only projects.<br />
Runtime imported textures are generally transient PF_B8G8R8A8 without compression. They can work without problem. <br />
* Texture Group as UI
* MipGen Settings as NoMipMaps
* CompressionSettings as UserInterface2D