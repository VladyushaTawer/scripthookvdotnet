#pragma once

#include "Vector3.hpp"

namespace GTA
{
	value class Model;
	ref class Ped;
	ref class Vehicle;
	ref class Camera;

	public enum class Weather
	{
		ExtraSunny,
		Clear,
		Clouds,
		Smog,
		Foggy,
		Overcast,
		Raining,
		ThunderStorm,
		Clearing,
		Neutral,
		Snowing,
		Blizzard,
		Snowlight,
		Christmas,
	};
	public enum class ExplosionType
	{
		Fire = 25,
		BigFire = 9,
	};

	public ref class World sealed abstract
	{
	public:
		static property GTA::Weather Weather
		{
			void set(GTA::Weather value);
		}
		static property System::DateTime CurrentDate
		{
			System::DateTime get();
			void set(System::DateTime value);
		}
		static property System::TimeSpan CurrentDayTime
		{
			System::TimeSpan get();
			void set(System::TimeSpan value);
		}
		static property int GravityLevel
		{
			void set(int value);
		}

		static array<Ped ^> ^GetNearbyPeds(Ped ^ped, float radius);
		static array<Ped ^> ^GetNearbyPeds(Ped ^ped, float radius, int maxAmount);
		static array<Vehicle ^> ^GetNearbyVehicles(Ped ^ped, float radius);
		static array<Vehicle ^> ^GetNearbyVehicles(Ped ^ped, float radius, int maxAmount);
		static Vehicle ^GetClosestVehicle(Math::Vector3 position, float radius);
		static float GetDistance(Math::Vector3 origin, Math::Vector3 destination);

		static Ped ^CreatePed(Model model, Math::Vector3 position);
		static Ped ^CreatePed(Model model, Math::Vector3 position, float heading);
		static Vehicle ^CreateVehicle(Model model, Math::Vector3 position);
		static Vehicle ^CreateVehicle(Model model, Math::Vector3 position, float heading);

		static void AddExplosion(Math::Vector3 position, ExplosionType type, float radius, float cameraShake);
		static void AddOwnedExplosion(Ped ^ped, Math::Vector3 position, ExplosionType type, float radius, float cameraShake);
		
		static Camera ^CreateCamera(Math::Vector3 position, Math::Vector3 rotation, float fov);
		static property Camera ^RenderingCamera
		{
			Camera ^get();
			void set(Camera ^renderingCamera);
		}
		static void DestroyAllCameras();

	internal:
		static initonly array<System::String ^> ^sWeatherNames = { "EXTRASUNNY", "CLEAR", "CLOUDS", "SMOG", "FOGGY", "OVERCAST", "RAIN", "THUNDER", "CLEARING", "NEUTRAL", "SNOW", "BLIZZARD", "SNOWLIGHT", "XMAS" };
	};
}