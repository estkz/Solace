# ❤️ Solace
The Solace calculator is the ultimate multi-mode tool, offering advanced calculations, conversions, and customizable themes in one sleek package.

## 😊 Collaborator(s)
I'm collaborating with my cute girlfriend on this advanced open-source calculator project! 😳

## 🌌 Setup
	[+] Clone the repo
	[+] Follow the guide in main.cpp (coming up)
	[+] Understand the code.
	[+] Copy & paste the code, or learn from it :)
	[+] Build in Release | x86
	[+] Profit

## 🪲 Error Fixes
If you encounter any issues or errors related to the includes on "d3dx9.h," make sure you have installed the DirectX SDK from https://www.microsoft.com/en-us/download/details.aspx?id=6812.

To resolve the include errors, follow these additional steps:

		• Open the project properties.
		• Go to "C/C++ -> General -> Additional Include Directories" and click the arrow on the right.
		• Click "Edit" and add the following text: "$(DXSDK_DIR)include".
		• Go to "VC++ Directories -> Library Directories," click the arrow again.
		• Click "Edit" and add the following: "$(DXSDK_DIR)LIB\x86".
		• Click "Apply" to save the changes.
    • Go to linker -> input and add the following: d3d9.lib
		• Once completed, the error should be resolved.

Note: Ensure that you include the double quotation marks when adding them to your properties! (this is not needed for d3d9.lib)

## 🚀 Enjoy
Have fun using this super advanced and easy-to-use calculator! Just so you know, we're still working on adding final touches.

FYI: This tool isn't fully done yet.
Version: Early Alpha
