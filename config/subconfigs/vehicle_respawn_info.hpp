class respawn_short
{
	respawnType = "RESPAWN";
	time = 10;
};

class respawn_medium
{
	respawnType = "RESPAWN";
	time = 30;
};

class respawn_long
{
	respawnType = "RESPAWN";
	time = 60;
};

class wreck_short
{
	respawnType = "WRECK";
	time = 10;
};

class wreck_medium
{
	respawnType = "WRECK";
	time = 30;
};

class wreck_long
{
	respawnType = "WRECK";
	time = 60;
};

//Jeeps + Small Cars
class OPTRE_M914_RV : respawn_short {};
class OPTRE_M813_TT : respawn_short {};
class OPTRE_M12_FAV : respawn_short {};
class OPTRE_M12_FAV_APC_MED : respawn_short {};
class OPTRE_M12_LRV : respawn_short {};
class OPTRE_m1087_stallion_unsc_resupply : respawn_short {};
class OPTRE_m1087_stallion_unsc_repair : respawn_short {};
class OPTRE_m1087_stallion_unsc_refuel : respawn_short {};


//APC
class OPTRE_M412_IFV_UNSC : respawn_medium {};
class OPTRE_M412_MGS_UNSC : respawn_medium {};
class OPTRE_M494 : respawn_medium {};

//Transport trucks
class OPTRE_m1087_stallion_unsc : respawn_short {};
class OPTRE_m1087_stallion_cover_unsc: respawn_short {};


//US Boats
class optre_catfish_mg_f : respawn_short {};
class optre_catfish_unarmed_f : respawn_short {};

//Air assets
//Small Helicopter
class OPTRE_UNSC_hornet : wreck_short {};
class OPTRE_UNSC_hornet_CAP : wreck_short {};
class OPTRE_UNSC_hornet_CAS : wreck_short {};

class OPTRE_UNSC_falcon : wreck_medium {};
class OPTRE_UNSC_falcon_unarmed : wreck_medium {};

class OPTRE_AV22B_Sparrowhawk : wreck_medium {};
class OPTRE_AV22C_Sparrowhawk : wreck_medium {};
class OPTRE_AV22_Sparrowhawk : wreck_medium {};
class OPTRE_AV22A_Sparrowhawk : wreck_medium {};

class OPTRE_Pelican_unarmed : wreck_medium {};
class OPTRE_Pelican_armed : wreck_long {};
class OPTRE_Pelican_armed_70mm : wreck_long {};


//Howitzer
class OPTRE_M875_SPH : respawn_long {};

//Tanks
class OPTRE_M808B_UNSC : respawn_long {};
class OPTRE_M808BM_UNSC : respawn_long {};
class OPTRE_M808B2 : respawn_long {};
class OPTRE_M808L : respawn_long {};
class OPTRE_M808S : respawn_long {};
class OPTRE_M850_UNSC : respawn_long {};
class OPTRE_M313_UNSC : respawn_long {};


//Planes
class OPTRE_YSS_1000_A : wreck_long {};
class OPTRE_YSS_1000_A_VTOL : wreck_long {};