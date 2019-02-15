if !(isServer) exitWith {};


		[
			"BigBang",
			"Activate Big Bang",
			{[1, MyVan, [11807.6,2355.34,0],[13190.5,925.354,0]] call LRG_fnc_BigBang;},
			[]
		] call LR_fnc_AddCreatorAction;