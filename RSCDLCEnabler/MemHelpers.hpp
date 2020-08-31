#pragma once

#include "windows.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "DirectX/d3dx9.h"
#include "DirectX/d3d9types.h"

#include "MemUtil.hpp"
#include "Offsets.hpp"
#include "Structs.hpp"
#include "Settings.hpp"

namespace MemHelpers {
	byte getLowestStringTuning();
	void ToggleLoft();
	void ShowSongTimer();
	void ShowCurrentTuning();
	bool IsExtendedRangeSong();
	float GetCurrentMusicVolume();
	int* GetWindowSize();
	bool IsInStringArray(std::string stringToCheckIfInsideArray, std::string* stringArray = NULL, std::vector<std::string> stringVector = std::vector<std::string>());
	void DrawTextOnScreen(std::string textToDraw, COLORREF textColor, int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, bool transparentBackground = true);
	void DX9DrawText(std::string textToDraw, int textColorHex, int fontWidth, int fontHeight, int fontWeight, int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, LPDIRECT3DDEVICE9 pDevice);

	std::string GetCurrentMenu(bool GameNotLoaded=false);
	void ToggleCB(bool enabled);

	void PatchCDLCCheck();

	inline static std::string lastMenu = "";
	inline static bool canGetRealMenu = false;
};
