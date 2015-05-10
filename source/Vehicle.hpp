#pragma once

#include "Entity.hpp"

namespace GTA
{
	ref class Ped;

	public enum class VehicleColor
	{
		MetallicBlack = 0,
		MetallicGraphiteBlack = 1,
		MetallicBlackSteal = 2,
		MetallicDarkSilver = 3,
		MetallicSilver = 4,
		MetallicBlueSilver = 5,
		MetallicSteelGray = 6,
		MetallicShadowSilver = 7,
		MetallicStoneSilver = 8,
		MetallicMidnightSilver = 9,
		MetallicGunMetal = 10,
		MetallicAnthraciteGrey = 11,
		MatteBlack = 12,
		MatteGray = 13,
		MatteLightGrey = 14,
		UtilBlack = 15,
		UtilBlackPoly = 16,
		UtilDarksilver = 17,
		UtilSilver = 18,
		UtilGunMetal = 19,
		UtilShadowSilver = 20,
		WornBlack = 21,
		WornGraphite = 22,
		WornSilverGrey = 23,
		WornSilver = 24,
		WornBlueSilver = 25,
		WornShadowSilver = 26,
		MetallicRed = 27,
		MetallicTorinoRed = 28,
		MetallicFormulaRed = 29,
		MetallicBlazeRed = 30,
		MetallicGracefulRed = 31,
		MetallicGarnetRed = 32,
		MetallicDesertRed = 33,
		MetallicCabernetRed = 34,
		MetallicCandyRed = 35,
		MetallicSunriseOrange = 36,
		MetallicClassicGold = 37,
		MetallicOrange = 38,
		MatteRed = 39,
		MatteDarkRed = 40,
		MatteOrange = 41,
		MatteYellow = 42,
		UtilRed = 43,
		UtilBrightRed = 44,
		UtilGarnetRed = 45,
		WornRed = 46,
		WornGoldenRed = 47,
		WornDarkRed = 48,
		MetallicDarkGreen = 49,
		MetallicRacingGreen = 50,
		MetallicSeaGreen = 51,
		MetallicOliveGreen = 52,
		MetallicGreen = 53,
		MetallicGasolineBlueGreen = 54,
		MatteLimeGreen = 55,
		UtilDarkGreen = 56,
		UtilGreen = 57,
		WornDarkGreen = 58,
		WornGreen = 59,
		WornSeaWash = 60,
		MetallicMidnightBlue = 61,
		MetallicDarkBlue = 62,
		MetallicSaxonyBlue = 63,
		MetallicBlue = 64,
		MetallicMarinerBlue = 65,
		MetallicHarborBlue = 66,
		MetallicDiamondBlue = 67,
		MetallicSurfBlue = 68,
		MetallicNauticalBlue = 69,
		MetallicBrightBlue = 70,
		MetallicPurpleBlue = 71,
		MetallicSpinnakerBlue = 72,
		MetallicUltraBlue = 73,
		UtilDarkBlue = 75,
		UtilMidnightBlue = 76,
		UtilBlue = 77,
		UtilSeaFoamBlue = 78,
		UilLightningblue = 79,
		UtilMauiBluePoly = 80,
		UtilBrightBlue = 81,
		MatteDarkBlue = 82,
		MatteBlue = 83,
		MatteMidnightBlue = 84,
		WornDarkblue = 85,
		WornBlue = 86,
		WornLightblue = 87,
		MetallicTaxiYellow = 88,
		MetallicRaceYellow = 89,
		MetallicBronze = 90,
		MetallicYellowBird = 91,
		MetallicLime = 92,
		MetallicChampagne = 93,
		MetallicPuebloBeige = 94,
		MetallicDarkIvory = 95,
		MetallicChocoBrown = 96,
		MetallicGoldenBrown = 97,
		MetallicLightBrown = 98,
		MetallicStrawBeige = 99,
		MetallicMossBrown = 100,
		MetallicBistonBrown = 101,
		MetallicBeechwood = 102,
		MetallicDarkBeechwood = 103,
		MetallicChocoOrange = 104,
		MetallicBeachSand = 105,
		MetallicSunBleechedSand = 106,
		MetallicCream = 107,
		UtilBrown = 108,
		UtilMediumBrown = 109,
		UtilLightBrown = 110,
		MetallicWhite = 111,
		MetallicFrostWhite = 112,
		WornHoneyBeige = 113,
		WornBrown = 114,
		WornDarkBrown = 115,
		Wornstrawbeige = 116,
		BrushedSteel = 117,
		BrushedBlacksteel = 118,
		BrushedAluminium = 119,
		Chrome = 120,
		WornOffWhite = 121,
		UtilOffWhite = 122,
		WornOrange = 123,
		WornLightOrange = 124,
		MetallicSecuricorGreen = 125,
		WornTaxiYellow = 126,
		policecarblue = 127,
		MatteGreen = 128,
		MatteBrown = 129,
		MatteWhite = 131,
		WornWhite = 132,
		WornOliveArmyGreen = 133,
		PureWhite = 134,
		HotPink = 135,
		Salmonpink = 136,
		MetallicVermillionPink = 137,
		Orange = 138,
		Green = 139,
		Blue = 140,
		MettalicBlackBlue = 141,
		MetallicBlackPurple = 142,
		MetallicBlackRed = 143,
		huntergreen = 144,
		MetallicPurple = 145,
		MetaillicVDarkBlue = 146,
		MODSHOPBLACK1 = 147,
		MattePurple = 148,
		MatteDarkPurple = 149,
		MetallicLavaRed = 150,
		MatteForestGreen = 151,
		MatteOliveDrab = 152,
		MatteDesertBrown = 153,
		MatteDesertTan = 154,
		MatteFoilageGreen = 155,
		DEFAULTALLOYCOLOR = 156,
		EpsilonBlue = 157,
	};
	public enum class VehicleDoor
	{
		FrontRightDoor = 1,
		FrontLeftDoor = 0,
		BackRightDoor = 3,
		BackLeftDoor = 2,
		Hood = 4,
		Trunk = 5,
		Trunk2 = 6,
	};
	public enum class VehicleMod
	{
		Spoilers = 0,
		FrontBumber = 1,
		RearBumper = 2,
		SideSkirt = 3,
		Exhaust = 4,
		Frame = 5,
		Grille = 6,
		Hood = 7,
		Fender = 8,
		RightFender = 9,
		Roof = 10,
		Engine = 11,
		Brakes = 12,
		Transmission = 13,
		Horns = 14,
		Suspension = 15,
		Armor = 16,
		FrontWheels = 23,
		BackWheels = 24 // only for motocycles
	};
	public enum class VehicleRoofState
	{
		Closed,
		Opening,
		Opened,
		Closing,
	};
	public enum class VehicleSeat
	{
		None = -3,
		Any = -2,
		Driver = -1,
		Passenger = 0,
		LeftFront = Driver,
		RightFront = Passenger,
		LeftRear = 1,
		RightRear = 2,
	};
	public enum class VehicleWheelType
	{
		Sport = 0,
		Muscle = 1,
		Lowrider = 2,
		SUV = 3,
		Offroad = 4,
		Tuner = 5,
		BikeWheels = 6,
		HighEnd = 7
	};
	public enum class VehicleWindow
	{
		FrontRightWindow = 1,
		FrontLeftWindow = 0,
		BackRightWindow = 3,
		BackLeftWindow = 2
	};
	public enum class VehicleWindowTint
	{
		None = 0,
		PureBlack = 1,
		DarkSmoke = 2,
		LightSmoke = 3,
		Stock = 4,
		Limo = 5,
		Green = 6
	};
	public enum class VehicleToggleMod
	{
		Turbo = 18,
		TireSmoke = 20,
		XenonHeadlights = 22
	};

	public ref class Vehicle sealed : public Entity
	{
	public:
		Vehicle(int id);

		static property Vehicle ^Any
		{
			Vehicle ^get();
		}

		property bool HasRoof
		{
			bool get();
		}
		property int PassengerSeats
		{
			int get();
		}
		property System::String ^DisplayName
		{
			System::String ^get();
		}
		property System::String ^NumberPlate
		{
			System::String ^get();
			void set(System::String ^value);
		}
		property bool IsConvertible
		{
			bool get();
		}
		property bool IsStolen
		{
			bool get();
			void set(bool value);
		}
		property bool IsDriveable
		{
			bool get();
			void set(bool value);
		}
		property bool IsOnAllWheels
		{
			bool get();
		}
		property float Speed
		{
			float get();
			void set(float value);
		}
		property float DirtLevel
		{
			float get();
			void set(float value);
		}
		property VehicleRoofState RoofState
		{
			VehicleRoofState get();
			void set(VehicleRoofState value);
		}
		property float EngineHealth
		{
			float get();
			void set(float value);
		}
		property float PetrolTankHealth
		{
			float get();
			void set(float value);
		}
		property bool SirenActive
		{
			bool get();
			void set(bool value);
		}
		property VehicleColor PrimaryColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}
		property VehicleColor SecondaryColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}
		property VehicleWheelType WheelType
		{
			VehicleWheelType get();
			void set(VehicleWheelType wheelType);
		}
		property VehicleWindowTint WindowTint
		{
			VehicleWindowTint get();
			void set(VehicleWindowTint windowTint);
		}
		property bool IsPrimaryColorCustom
		{
			bool get();
		}
		property bool IsSecondaryColorCustom
		{
			bool get();
		}

		property bool IsWanted
		{
			void set(bool value);
		}
		property bool EngineRunning
		{
			void set(bool value);
		}
		property bool LightsOn
		{
			void set(bool value);
		}
		property bool BrakeLightsOn
		{
			void set(bool value);
		}
		property bool LeftIndicatorLightOn
		{
			void set(bool value);
		}
		property bool RightIndicatorLightOn
		{
			void set(bool value);
		}
		property bool TaxiLightOn
		{
			bool get();
			void set(bool value);
		}
		property bool SearchLightOn
		{
			bool get();
			void set(bool value);
		}
		property bool InteriorLightOn
		{
			void set(bool value);
		}
		property bool NeedsToBeHotwired
		{
			void set(bool value);
		}
		property bool CanTiresBurst
		{
			void set(bool value);
		}
		property bool CanBeVisiblyDamaged
		{
			void set(bool value);
		}
		property bool PreviouslyOwnedByPlayer
		{
			void set(bool value);
		}
		property System::Drawing::Color CustomPrimaryColor
		{
			void set(System::Drawing::Color color);
		}
		property System::Drawing::Color CustomSecondaryColor
		{
			void set(System::Drawing::Color color);
		}

		int GetMod(VehicleMod modType);
		void SetMod(VehicleMod modType, int modIndex, bool variations);
		void ToggleMod(VehicleToggleMod toggleMod, bool toggle);
		bool IsToggleModOn(VehicleToggleMod toggleMod);
		void ClearCustomPrimaryColor();
		void ClearCustomSecondaryColor();
		Ped ^GetPedOnSeat(VehicleSeat seat);

		void Repair();
		void Explode();
		bool SetOnGround();
		void OpenDoor(VehicleDoor door, bool loose, bool instantly);
		void CloseDoor(VehicleDoor door, bool instantly);
		void FixWindow(VehicleWindow window);
		void SmashWindow(VehicleWindow window);
		void RollUpWindow(VehicleWindow window);
		void RollDownWindow(VehicleWindow window);
		void RollDownWindows();
		void RemoveWindow(VehicleWindow window);

	private:
		int mID;
	};
}