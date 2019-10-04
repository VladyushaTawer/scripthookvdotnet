//
// Copyright (C) 2015 crosire & contributors
// License: https://github.com/crosire/scripthookvdotnet#license
//

using GTA.Native;

namespace GTA
{
	public sealed class VehicleWheel
	{
		#region Fields
		Vehicle _owner;
		#endregion

		internal VehicleWheel(Vehicle owner, int index)
		{
			_owner = owner;
			Index = index;
		}

		public int Index { get; private set; }

		public Vehicle Vehicle => _owner;

		public void Burst()
		{
			Function.Call(Hash.SET_VEHICLE_TYRE_BURST, _owner.Handle, Index, true, 1000f);
		}
		public void Fix()
		{
			Function.Call(Hash.SET_VEHICLE_TYRE_FIXED, _owner.Handle, Index);
		}
	}
}
