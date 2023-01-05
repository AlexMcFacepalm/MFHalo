class vn_logistics
{
    class vehicle_data
    {
	class vn_defaults_large
	{
		inventory_max_weight = 600;
		inventory_max_size = 7.5;
	};
	class vn_defaults_medium
	{
		inventory_max_weight = 300;
		inventory_max_size = 5;
	};
	class vn_defaults_small
	{
		inventory_max_weight = 100;
		inventory_max_size = 2.5;
	};
	class vn_defaults_tiny
	{
		inventory_max_weight = 50;
		inventory_max_size = 1;
	};

		//Jeeps + Small Cars
		class OPTRE_M914_RV : vn_defaults_small {};
		class OPTRE_M813_TT : vn_defaults_tiny {};
		class OPTRE_M12_FAV : vn_defaults_small {};
		class OPTRE_M12_FAV_APC_MED : vn_defaults_small {};
		class OPTRE_M12_LRV : vn_defaults_tiny {};
		class OPTRE_m1087_stallion_unsc_resupply : vn_defaults_large {};
		class OPTRE_m1087_stallion_unsc_repair : vn_defaults_large {};
		class OPTRE_m1087_stallion_unsc_refuel : vn_defaults_large {};


		//APC
		class OPTRE_M412_IFV_UNSC : vn_defaults_medium {};
		class OPTRE_M412_MGS_UNSC : vn_defaults_medium {};
		class OPTRE_M494 : vn_defaults_small {};

		//Transport trucks
		class OPTRE_m1087_stallion_unsc : vn_defaults_medium {};
		class OPTRE_m1087_stallion_cover_unsc: vn_defaults_medium {};


		//US Boats
		class optre_catfish_mg_f : vn_defaults_tiny {};
		class optre_catfish_unarmed_f : vn_defaults_small {};

		//Air assets
		//Small Helicopter
		class OPTRE_UNSC_hornet : vn_defaults_tiny {};
		class OPTRE_UNSC_hornet_CAP : vn_defaults_tiny {};
		class OPTRE_UNSC_hornet_CAS : vn_defaults_tiny {};

		class OPTRE_UNSC_falcon : vn_defaults_small {};
		class OPTRE_UNSC_falcon_unarmed : vn_defaults_small {};

		class OPTRE_AV22B_Sparrowhawk : vn_defaults_small {};
		class OPTRE_AV22C_Sparrowhawk : vn_defaults_small {};
		class OPTRE_AV22_Sparrowhawk : vn_defaults_small {};
		class OPTRE_AV22A_Sparrowhawk : vn_defaults_small {};

		class OPTRE_Pelican_unarmed : vn_defaults_large {};
		class OPTRE_Pelican_armed : vn_defaults_medium {};
		class OPTRE_Pelican_armed_70mm : vn_defaults_medium {};


		//Howitzer
		class OPTRE_M875_SPH : vn_defaults_tiny {};

		//Tanks
		class OPTRE_M808B_UNSC : vn_defaults_tiny {};
		class OPTRE_M808BM_UNSC : vn_defaults_tiny {};
		class OPTRE_M808B2 : vn_defaults_tiny {};
		class OPTRE_M808L : vn_defaults_tiny {};
		class OPTRE_M808S : vn_defaults_tiny {};
		class OPTRE_M850_UNSC : vn_defaults_tiny {};
		class OPTRE_M313_UNSC : vn_defaults_tiny {};


		//Planes
		class OPTRE_YSS_1000_A : vn_defaults_tiny {};
		class OPTRE_YSS_1000_A_VTOL : vn_defaults_tiny {};
    };
    class item_data
    {
		//Building supplies crate
        class vn_b_ammobox_supply_05
        {
            item_weight = 200;
            item_size = 2.5;
            spawn_distance = 5;
            rotation_offset = 0;
        };

		//Building supplies container
		class Land_Cargo10_brick_red_F
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 9;
			rotation_offset = 0;
		};

		//Small komex containers
		class vn_us_komex_small_01 : Land_Cargo10_brick_red_F {};
		class vn_us_komex_small_02 : Land_Cargo10_brick_red_F {};
		class vn_us_komex_small_03 : Land_Cargo10_brick_red_F {};

		//Workshop supplies
		class vn_b_ammobox_supply_06 : vn_b_ammobox_supply_05 {};

		//Sandbag supplies
		class vn_b_ammobox_supply_10 : vn_b_ammobox_supply_05 {};

		//Small US ammo
		class vn_b_ammobox_supply_04
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};

		//SOG ammo
		class vn_b_ammobox_sog // ammo
        {
            item_weight = 100;
            item_size = 2.5;
            spawn_distance = 3;
            rotation_offset = 0;
        };
		//US Ammo
		class vn_b_ammobox_supply_01 : vn_b_ammobox_sog {};
		//Medical supplies
		class vn_b_ammobox_supply_03 : vn_b_ammobox_sog {};
		//Food supplies
		class vn_b_ammobox_supply_02 : vn_b_ammobox_supply_03 {};

		//Resupply Fuel/Repair/Ammo
		class vn_b_ammobox_supply_07 : vn_b_ammobox_supply_05
		{
				item_weight = 400;
				item_size = 10;
		};
		class vn_b_ammobox_supply_08 : vn_b_ammobox_supply_07 {};

		class vn_b_ammobox_supply_09 : vn_b_ammobox_supply_07 {};

		/* Huron cargo container used to package wrecked vehicles */
		class B_Slingload_01_Cargo_F
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 8;
			rotiation_offset = 0;
		};

		//Medium komex containers
		class vn_us_komex_medium_01 : B_Slingload_01_Cargo_F {};
		class vn_us_komex_medium_02 : vn_us_komex_medium_01 {};
		class vn_us_komex_medium_03 : vn_us_komex_medium_01 {};

		///////////////////
		////  STATICS  ////
		///////////////////
		class vn_static_tiny
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};

		class vn_static_small
		{
			item_weight = 100;
			item_size = 2.5;
			spawn_distance = 3;
			rotation_offset = 0;
		};

		class vn_static_large
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 4;
			rotation_offset = 0;
		};

		class vn_b_army_static_mortar_m2 : vn_static_tiny {};
		class vn_b_army_static_mortar_m29 : vn_static_tiny {};
		class vn_b_sf_static_mortar_m2 : vn_static_tiny {};
		class vn_b_sf_static_mortar_m29 : vn_static_tiny {};
		class vn_b_army_static_m1919a6 : vn_static_tiny {};
		class vn_b_sf_static_m1919a6 : vn_static_tiny {};
		class vn_b_army_static_m1919a4_low : vn_static_tiny {};
		class vn_b_army_static_m1919a4_high : vn_static_tiny {};
		class vn_b_sf_static_m1919a4_low : vn_static_tiny {};
		class vn_b_sf_static_m1919a4_high : vn_static_tiny {};
		class vn_b_army_static_m2_low : vn_static_tiny {};
		class vn_b_sf_static_m2_low : vn_static_tiny {};
		class vn_b_army_static_m2_high : vn_static_tiny {};
		class vn_b_sf_static_m2_high : vn_static_tiny {};
		class vn_b_army_static_m60_low : vn_static_tiny {};
		class vn_b_sf_static_m60_low : vn_static_tiny {};
		class vn_b_army_static_m60_high : vn_static_tiny {};
		class vn_b_sf_static_m60_high : vn_static_tiny {};
		class vn_b_sf_static_m40a1rr : vn_static_small {};
		//TODO - Bump these to large when slingloading is added to M45s
		class vn_b_army_static_m45 : vn_static_small {};
		class vn_b_sf_static_m45 : vn_static_small {};
		class vn_b_army_static_m101_01 : vn_static_large {};
		class vn_b_army_static_m101_02 : vn_static_large {};
		class vn_b_sf_static_m101_01 : vn_static_large {};
		class vn_b_sf_static_m101_02 : vn_static_large {}
		class vn_i_static_m101_01 : vn_static_large {};
		class vn_i_static_m101_02 : vn_static_large {};
		class vn_i_marines_static_m101_01 : vn_static_large {};
		class vn_i_marines_static_m101_02 : vn_static_large {};

		class vn_i_static_mortar_m2: 	vn_b_army_static_mortar_m2 {};
		class vn_i_static_mortar_m29: 	vn_b_army_static_mortar_m29 {};
		class vn_i_static_m1919a6: 	vn_b_army_static_m1919a6 {};
		class vn_i_static_m1919a4_low: 	vn_b_army_static_m1919a4_low {};
		class vn_i_static_m1919a4_high:	vn_b_army_static_m1919a4_high {};
		class vn_i_static_m2_low: 	vn_b_army_static_m2_low {};
		class vn_i_static_m2_high: 	vn_b_army_static_m2_high {};
		class vn_i_static_m60_low: 	vn_b_army_static_m60_low {};
		class vn_i_static_m60_high: 	vn_b_army_static_m60_high {};
		class vn_i_army_static_m45: 	vn_b_army_static_m45 {};

		class vn_o_nva_static_rpd_high: 	vn_b_army_static_m60_high {};
		class vn_o_nva_static_dshkm_high_01:	vn_b_army_static_m2_high {};
		class vn_o_nva_static_dshkm_high_02: 	vn_b_army_static_m2_high {};
		class vn_o_nva_static_dshkm_low_01:	vn_b_army_static_m2_low {};
		class vn_o_nva_static_dshkm_low_02:	vn_b_army_static_m2_low {};
		class vn_o_nva_static_mortar_type53: 	vn_b_army_static_mortar_m29 {};
		class vn_o_nva_static_mortar_type63: 	vn_b_army_static_mortar_m2 {};

		class vn_o_nva_navy_static_rpd_high: 		vn_b_army_static_m60_high {};
		class vn_o_nva_navy_static_dshkm_high_01:	vn_b_army_static_m2_high {};
		class vn_o_nva_navy_static_dshkm_high_02: 	vn_b_army_static_m2_high {};
		class vn_o_nva_navy_static_dshkm_low_01:	vn_b_army_static_m2_low {};
		class vn_o_nva_navy_static_dshkm_low_02:	vn_b_army_static_m2_low {};
		class vn_o_nva_navy_static_mortar_type53: 	vn_b_army_static_mortar_m29 {};
		class vn_o_nva_navy_static_mortar_type63: 	vn_b_army_static_mortar_m2 {};

		class vn_o_vc_static_rpd_high: 		vn_b_army_static_m60_high {};
		class vn_o_vc_static_dp28_high: 	vn_b_army_static_m60_high {};
		class vn_o_vc_static_dshkm_high_01:	vn_b_army_static_m2_high {};
		class vn_o_vc_static_dshkm_high_02: 	vn_b_army_static_m2_high {};
		class vn_o_vc_static_dshkm_low_01:	vn_b_army_static_m2_low {};
		class vn_o_vc_static_dshkm_low_02:	vn_b_army_static_m2_low {};
		class vn_o_vc_static_mortar_type53: 	vn_b_army_static_mortar_m29 {};
		class vn_o_vc_static_mortar_type63: 	vn_b_army_static_mortar_m2 {};
    };
};
