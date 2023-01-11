class units
{
	class west
	{
		sog_demolitions = "vn_b_men_sog_08";
		sog_grenadier = "vn_b_men_sog_07";
		sog_grenadier_1 = "vn_b_men_sog_11";
		sog_machine_gunner = "vn_b_men_sog_06";
		sog_machinegunner_1 = "vn_b_men_sog_16";
		sog_machinegunner_2 = "vn_b_men_sog_18";
		sog_marksman_2 = "vn_b_men_sog_21";
		sog_medic = "vn_b_men_sog_10";
		sog_medic_1 = "vn_b_men_sog_20";
		sog_one_one_rto = "vn_b_men_sog_02";
		sog_one_one_rto_2 = "vn_b_men_sog_14";
		sog_one_two_medic = "vn_b_men_sog_03";
		sog_one_two_medic_2 = "vn_b_men_sog_15";
		sog_one_zero_team_leader = "vn_b_men_sog_01";
		sog_one_zero_team_leader_1 = "vn_b_men_sog_13";
		sog_rto = "vn_b_men_sog_05";
		sog_rto_1 = "vn_b_men_sog_12";
		sog_rto_2 = "vn_b_men_sog_17";
		sog_scout = "vn_b_men_sog_09";
		sog_scout_1 = "vn_b_men_sog_19";
		sog_squad_leader = "vn_b_men_sog_04";

		sog_teamleaders[] = {"sog_one_zero_team_leader", "sog_one_zero_team_leader_1"};
		sog_rtos[] = {"sog_rto", "sog_rto_1", "sog_rto_2"};
		sog_medics[] = {"sog_medic", "sog_medic_1"};
		sog_scouts[] = {"sog_scout", "sog_scout_1"};
		sog_grenadiers[] = {"sog_grenadier", "sog_grenadier_1"};
		sog_mgs[] = {"sog_machine_gunner", "sog_machinegunner_1", "sog_machinegunner_2"};
		sog_ats[] = {"sog_demolitions"};
	};

	class east
	{
		

		vc_local_basic[] = {"OPTRE_Ins_ER_Farmer", "OPTRE_Ins_ER_Guerilla_AR"};
		vc_local_officers[] = {"OPTRE_Ins_ER_Warlord"};
		vc_local_smgs[] = {"OPTRE_Ins_ER_Hacker"};
		vc_local_marksmen[] = {"OPTRE_Ins_ER_Insurgent_BR", "OPTRE_Ins_ER_Assassin"};
		vc_local_medics[] = {"OPTRE_Ins_ER_Surgeon"};
		vc_local_grenadiers[] = {"OPTRE_Ins_ER_Rebel_AT",  "OPTRE_Ins_ER_Deserter_GL"};
		vc_local_ats[] = {"OPTRE_Ins_URF_AT_Specialist", "OPTRE_Ins_URF_AA_Specialist"};
		vc_local_mgs[] = {"OPTRE_Ins_ER_Militia_MG"};
		vc_local_rtos[] = {"vc_local_rto_m1891", "vc_local_rto_m1_carbine"};
		vc_local_sappers[] = {"OPTRE_Ins_ER_Rebel_AT"};
		vc_local_sentrys[] = {"OPTRE_Ins_ER_Terrorist"};
		


		vc_main_ats[] = {"vc_main_at_type_56_b41"};
		

	};

	class guer
	{


		//Units can be combined into arrays.
		//Only one unit will be chosen from an array.
		arvn_squad_leaders[] = {"OPTRE_Ins_ER_MAdvisor", "OPTRE_Ins_URF_Officer"};
		arvn_rtos[] = {"OPTRE_Ins_URF_Radioman"};
		arvn_medics[] = {"OPTRE_Ins_URF_Medic"};
		arvn_grenadiers[] = {"OPTRE_Ins_URF_Demolitions", "OPTRE_Ins_URF_Grenadier", "OPTRE_Ins_URF_Engineer"};
		arvn_riflemen[] = {"OPTRE_Ins_URF_Rifleman_Light", "OPTRE_Ins_URF_Rifleman_BR", "OPTRE_Ins_URF_Rifleman_AR", "arvn_rifleman_4", "arvn_rifleman_5", "arvn_rifleman_6"};
		arvn_scouts[] =	{"OPTRE_Ins_URF_Observer"};
		arvn_snipers[] = {"OPTRE_Ins_URF_Sniper"};
		arvn_marksmen[] = {"OPTRE_Ins_URF_Marksman"};
		arvn_mgs[] = {"OPTRE_Ins_URF_Autorifleman"};
	};
};

class squad_compositions
{
	class west 
	{
		patrol[] = {
			"sog_teamleaders",
			"sog_rtos",
			{"sog_scouts", "sog_medics"},
			{"sog_scouts", "sog_medics"}
		};

		standard[] = {
			"sog_teamleaders",
			"sog_rtos",
			{"sog_scouts", "sog_medics"},
			{"sog_scouts", "sog_medics"}
		};
	};

	class east
	{
		//Each entry can be a text reference to a unit, or an array of references.
		//For each entry, a unit is selected randomly to go into the template used when spawning.
		vc_local_patrol[] = {
			"vc_local_basic",
			{"vc_local_basic", "vc_local_grenadiers"},
			{"vc_local_smgs", "vc_local_officers"},
			"vc_local_marksmen"
		};

		vc_local_standard[] = {
			"vc_local_officers",
			{"vc_local_basic", "vc_local_marksmen", "vc_local_grenadiers", "vc_local_mgs"},
			{"vc_local_ats", "vc_main_ats"},
			"vc_local_medics",
			{"vc_local_marksmen", "vc_local_mgs"},
			{"vc_local_grenadiers", "vc_local_grenadiers", "vc_local_basic"},
			{"vc_local_basic", "vc_local_ats"},
			{"vc_local_basic", "vc_local_smgs"},
			{"vc_local_basic", "vc_local_mgs", "vc_local_smgs"},
			{"vc_local_basic", "vc_local_marksmen", "vc_local_smgs"}
		};
		
		vc_local_at[] = {
			"vc_local_ats",
			"vc_local_ats",
			"vc_local_basic",
			{"vc_local_smgs"},
			{"vc_local_medics"}
		};	
		
		vc_local_cover_element[] = {
			"vc_local_marksmen",
			"vc_local_mgs",
			{"vc_local_marksmen", "vc_local_mgs"},
			"vc_local_basic",
			"vc_local_smgs",
			"vc_local_grenadiers"
		};	
			
		vc_local_storm_element[] = {
			"vc_local_smgs",
			"vc_local_medics",
			{"vc_local_rtos", "vc_local_sappers"},
			"vc_local_basic",
			"vc_local_basic",
			"vc_local_smgs"
		};	
			
		vc_local_sentry[] = {
			"vc_local_sentrys",
			{"vc_local_basic", "vc_local_marksmen", "vc_local_mgs", "vc_local_smgs"}
		};
		
		vc_main_patrol[] = {
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_grenadier_sks"},
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_grenadier_sks"},
			{"vc_main_rifleman_type_56", "vc_main_marksman_m9130", "vc_main_marksman_m9130", "vc_main_machinegunner_rpd"},	
			{"vc_main_rifleman_mat49", "vc_main_rifleman_ppsh41"}
		};	
			
		vc_main_standard[] = {
			"vc_main_officer_k50m",
			{"vc_main_rifleman_mat49", "vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo"},
			"vc_main_medic_ish54",
			"vc_main_at_type_56_b41",
			{"vc_main_rto_ppsh41", "vc_main_rifleman_ppsh41"},
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks", "vc_main_grenadier_sks"},
			"vc_main_rifleman_type_56",
			{"vc_main_sapper_k50m", "vc_main_rifleman_ppsh41"},
			{"vc_main_machinegunner_rpd", "vc_main_rifleman_mat49"},
			{"vc_main_marksman_m9130", "vc_main_rifleman_ppsh41"}
		};	
			
		vc_main_at[] = {
			"vc_main_at_type_56_b41",
			"vc_main_at_type_56_b41",
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_grenadier_sks"},
			"vc_main_rifleman_type_56",
			{"vc_main_medic_ish54", "vc_main_rifleman_ppsh41"}
		};		
	    
		vc_main_mortar[] = {
			"vc_main_mortar_ammo_pps52",
			"vc_main_mortar_gunner_pps43",
			"vc_main_mortar_tripod_mat49",
			"vc_main_rto_ppsh41",
			"vc_main_rifleman_type_56",
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_grenadier_sks"}
		};
	
		vc_main_cover_element[] = {
			"vc_main_machinegunner_rpd",
			"vc_main_marksman_m9130",
			{"vc_main_marksman_m9130", "vc_main_machinegunner_rpd"},
			{"vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_grenadier_sks"},
			"vc_main_rifleman_type_56"
		};	
	
		vc_main_storm_element[] = {
			"vc_main_rifleman_ppsh41",
			"vc_main_medic_ish54",
			{"vc_main_rto_ppsh41", "vc_main_sapper_k50m"},
			{"vc_main_rifleman_sks_bayo", "vc_main_rifleman_type_56"},
			{"vc_main_rifleman_sks_bayo", "vc_main_rifleman_mat49"},
			"vc_main_rifleman_ppsh41"
		};	
	
		vc_main_sentry[] = {
			"vc_main_sentry_m9130_bayo",
			{"vc_main_rifleman_mat49", "vc_main_rifleman_ppsh41", "vc_main_rifleman_sks", "vc_main_rifleman_sks_bayo", "vc_main_rifleman_type_56", "vc_main_marksman_m9130", "vc_main_machinegunner_rpd"}
		};
		
		vc_regional_patrol[] = {
			{"vc_regional_rifleman_m38", "vc_regional_grenadier_m4956", "vc_regional_rifleman_m38_bayo"},
			{"vc_regional_rifleman_m38", "vc_regional_grenadier_m4956", "vc_regional_rifleman_m38_bayo"},
			{"vc_regional_rifleman_m3a1", "vc_regional_rifleman_ppsh41", "vc_regional_marksman_m4956", "vc_regional_machinegunner_dp27"},
			"vc_regional_rifleman_k50m"
		};
			
		vc_regional_standard[] = {
			"vc_regional_officer_mat49",
			{"vc_regional_rifleman_k50m", "vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo"},	
			"vc_regional_medic_ish54",
			"vc_regional_at_ish54_short_b41",
			{"vc_regional_rto_m1891", "vc_regional_rifleman_k50m"},
			{"vc_regional_rifleman_k50m", "vc_regional_rifleman_ppsh41", "vc_regional_grenadier_m4956"},
			{"vc_regional_sapper_m3a1", "vc_regional_rifleman_m3a1"},
			{"vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo"},
			{"vc_regional_machinegunner_dp27", "vc_regional_rifleman_k50m"},
			{"vc_regional_marksman_m4956", "vc_regional_rifleman_ppsh41"}
		};	
		
		vc_regional_at[] = {
			"vc_regional_at_ish54_short_b41",
			"vc_regional_at_ish54_short_b41",
			{"vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo", "vc_regional_grenadier_m4956"},
			{"vc_regional_rifleman_m3a1", "vc_regional_rifleman_ppsh41"},
			{"vc_regional_medic_ish54", "vc_regional_rifleman_k50m"}
		};	
			
		vc_regional_cover_element[] = {
			"vc_regional_machinegunner_dp27",
			"vc_regional_marksman_m4956",
			{"vc_regional_machinegunner_dp27", "vc_regional_marksman_m4956"},
			{"vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo", "vc_regional_rifleman_m3a1"},			
			{"vc_regional_rifleman_k50m", "vc_regional_rifleman_ppsh41"}
		};

		vc_regional_storm_element[] = {
			"vc_regional_rifleman_k50m",
			"vc_regional_medic_ish54",
			{"vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo"},
			"vc_regional_rifleman_m3a1",
			"vc_regional_rifleman_ppsh41"
		};	
		
		vc_regional_sentry[] = {
			"vc_regional_sentry_m4956_bayo",
			{"vc_regional_rifleman_k50m", "vc_regional_rifleman_m38", "vc_regional_rifleman_m38_bayo", "vc_regional_rifleman_m3a1", "vc_regional_rifleman_ppsh41", "vc_regional_machinegunner_dp27", "vc_regional_marksman_m4956"}
		};
		
		nva_main_patrol[] = {
			{"nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
			{"nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
			{"nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo", "nva_main_marksman_sksSniper", "nva_main_machinegunner_rpd"},
			"nva_main_rifleman_k50m"
		};

		nva_main_standard[] = {
			"nva_main_officer_k50m",
			{"nva_main_rifleman_k50m", "nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
			"nva_main_medic_k50m",
			"nva_main_at_sks_rpg7",
			{"nva_main_rto_k50m", "nva_main_rifleman_k50m"},
			{"nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
			{"nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo"},
		    {"nva_main_sapper_k50m", "nva_main_rifleman_k50m"},
		    {"nva_main_machinegunner_rpd", "nva_main_rifleman_k50m"},
			{"nva_main_marksman_sksSniper", "nva_main_rifleman_k50m"}
	    };
		
        nva_main_at[] = { 
			"nva_main_at_sks_rpg7",
			"nva_main_at_sks_rpg7",
			{"nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
		    {"nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo"},
			{"nva_main_rifleman_k50m", "nva_main_medic_k50m"}
		};	
		
		 //Could be used on the Mortar emplacements (subtasks)
		nva_main_mortar[] = { 
			"nva_main_mortar_ammo_pps52",
			"nva_main_mortar_gunner_pps43",
			"nva_main_mortar_tripod_k50m",
			"nva_main_rto_k50m",
			{"nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_grenadier_sksGl"},
			{"nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo"}
		};	
		
		 //Combine with storm element (based on IRL elements for Attacks)
		nva_main_cover_element[] = {
			"nva_main_machinegunner_rpd",
			"nva_main_marksman_sksSniper",
			{"nva_main_marksman_sksSniper", "nva_main_machinegunner_rpd"},
			{"nva_main_grenadier_sksGl", "nva_main_rifleman_sks", "nva_main_rifleman_sksBayo"},
			{"nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo"}
		};
		 //Combine with cover element
		nva_main_storm_element[] = {
			"nva_main_rifleman_k50m",
			"nva_main_medic_k50m",
			{"nva_main_rto_k50m", "nva_main_sapper_k50m"},
		    {"nva_main_rifleman_sksBayo", "nva_main_rifleman_type56Bayo"},
		    {"nva_main_rifleman_sksBayo", "nva_main_rifleman_type56Bayo"},
			"nva_main_rifleman_k50m"
		};

        nva_main_sentry[] = {
			"nva_main_sentry_sksBayo",
			{"nva_main_rifleman_k50m", "nva_main_rifleman_sks", "nva_main_rifleman_sksBayo", "nva_main_rifleman_type56", "nva_main_rifleman_type56Bayo", "nva_main_marksman_sksSniper", "nva_main_machinegunner_rpd"}
		};
		
		nva_marines_patrol[] = {
			{"nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_sksBayo", "nva_marines_grenadier_sksGl"},
			{"nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_sksBayo", "nva_marines_grenadier_sksGl"},
			{"nva_marines_rifleman_type56", "nva_marines_marksman_sksSniper", "nva_marines_machinegunner_rpd"},
			"nva_marines_rifleman_k50m"
		};
		
		nva_marines_standard[] = {
			"nva_marines_officer_k50m",
			{"nva_marines_rifleman_k50m", "nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_sksBayo", "nva_marines_grenadier_sksGl"},
			"nva_marines_medic_k50m",
			"nva_marines_at_sks_rpg2",
			{"nva_marines_rto_k50m", "nva_marines_rifleman_k50m"},
			{"nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_sksBayo", "nva_marines_grenadier_sksGl"},
			"nva_marines_rifleman_type56",
		    {"nva_marines_sapper_k50m", "nva_marines_rifleman_k50m"},
		    {"nva_marines_machinegunner_rpd", "nva_marines_rifleman_k50m"},
			{"nva_marines_marksman_sksSniper", "nva_marines_rifleman_k50m"}
	    };

		nva_marines_raiders[] = {
			"nva_marines_officer_k50m",
			"nva_marines_rto_k50m",
			"nva_marines_sapper_k50m",
			{"nva_marines_at_sks_rpg2", "nva_marines_grenadier_sksGl"},
			{"nva_marines_machinegunner_rpd", "nva_marines_marksman_sksSniper"},
			{"nva_marines_medic_k50m", "nva_marines_rifleman_k50m", "nva_marines_rifleman_sksBayo", "nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_type56"}
		};
	
		nva_marines_at[] = {
			"nva_marines_at_sks_rpg2",
			"nva_marines_at_sks_rgp2",
			{"nva_marines_rifleman_sks_0", "nva_marines_rifleman_sksBayo", "nva_marines_rifleman_sks_1", "nva_marines_grenadier_sksGl"},
		    "nva_marines_rifleman_type56",
			{"nva_marines_rifleman_k50m", "nva_marines_medic_k50m"}
		};	
	
		nva_marines_sentry[] = {
			"nva_marines_sentry_sksBayo",
			{"nva_marines_rifleman_k50m", "nva_marines_rifleman_sks_0", "nva_marines_rifleman_sks_1", "nva_marines_rifleman_sksBayo", "nva_marines_rifleman_type56", "nva_marines_marksman_sksSniper", "nva_marines_machinegunner_rpd"}
		};
	
		nva_navy_patrol[] = {
			{"nva_navy_rifleman_sks_0", "nva_navy_rifleman_sks_1", "nva_navy_rifleman_sksBayo", "nva_navy_grenadier_sksGl"},
			{"nva_navy_rifleman_sks_0", "nva_navy_rifleman_sks_1", "nva_navy_rifleman_sksBayo", "nva_navy_grenadier_sksGl"},
			{"nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo", "nva_navy_marksman_sksSniper", "nva_navy_machinegunner_rpd"},
			"nva_marines_rifleman_type56"
		};
	
		nva_navy_standard[] = {
			"nva_navy_officer_type56",
			{"nva_navy_rifleman_type56", "nva_navy_rifleman_sks_0", "nva_navy_rifleman_sks_1", "nva_navy_rifleman_sksBayo", "nva_navy_grenadier_sksGl"},
			"nva_navy_medic",
			"nva_navy_at_sks_rpg2",
			{"nva_navy_rto_k50m", "nva_navy_rifleman_type56"},
			{"nva_navy_rifleman_sks_0", "nva_navy_rifleman_sks_1", "nva_navy_rifleman_sksBayo", "nva_navy_grenadier_sksGl"},
			"nva_navy_rifleman_type56",
		    {"nva_navy_sapper_sks", "nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo"},
		    {"nva_navy_machinegunner_rpd", "nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo"},
			{"nva_navy_marksman_sksSniper", "nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo"}
	    };
	
		//could be placed/spawned near nva naval areas/bases at the pier
		nva_navy_crew[] = {
			"nva_navy_officer_type56",
			"nva_navy_rto_k50m",
			"nva_navy_medic",
			{"nva_navy_machinegunner_rpd", "nva_navy_marksman_sksSniper"},
		};	
		
		nva_navy_at[] = {
			"nva_navy_at_sks_rpg2",
			"nva_navy_at_sks_rgp2",
			{"nva_navy_rifleman_sks_0", "nva_navy_rifleman_sksBayo", "nva_navy_rifleman_sks_1", "nva_navy_grenadier_sksGl"},
			{"nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo"},
			"nva_marines_medic_k50m"
		};	
	
		nva_navy_sentry[] = {
			"nva_navy_sentry_sksBayo",
			{"nva_navy_rifleman_type56", "nva_navy_rifleman_type56Bayo", "nva_navy_rifleman_sks_0", "nva_navy_rifleman_sks_1", "nva_navy_rifleman_sksBayo", "nva_navy_marksman_sksSniper", "nva_navy_machinegunner_rpd"}
		};
	
		//Aircrew units could be spawned around airbases next to, hangars, landingpads etc. 
		nva_aircrew_heli_1[] = {
			"nva_aircrew_heli_pilot",
			"nva_aircrew_heli_copilot"
		};
		
		nva_aircrew_heli_2[] = {
			"nva_aircrew_heli_pilot",
			"nva_aircrew_heli_copilot",
			"nva_aircrew_heli_crew_chief",
			"nva_aircrew_heli_gunner"
		};
	
		nva_aircrew_jet[] = {
			{"nva_aircrew_jet_pilot_0", "nva_aircrew_jet_pilot_1"},
			{"nva_aircrew_jet_pilot_0", "nva_aircrew_jet_pilot_1"}
		};
		
		nva_dac_cong_patrol[] = {
			{"nva_dac_cong_rifleman_sksBayo_izh54P", "nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1", "nva_dac_cong_grenadier_m79"},
			{"nva_dac_cong_rifleman_sksBayo_izh54P", "nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1", "nva_dac_cong_grenadier_m79"},
			{"nva_dac_cong_rifleman_type56", "nva_dac_cong_marksman_sksSniper", "nva_dac_cong_machinegunner_rpd"},
			"nva_dac_cong_rifleman_k50m"
		};
		
		nva_dac_cong_standard[] = {
			"nva_dac_cong_officer_type56",
			{"nva_dac_cong_rifleman_sksBayo_izh54P", "nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1", "nva_dac_cong_grenadier_m79"},
			"nva_dac_cong_medic_k50m",
			"nva_dac_cong_at_type56_rpg7",
			{"nva_dac_cong_rto_izh54", "nva_dac_cong_rifleman_sksBayo_izh54P"},
			{"nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1", "nva_dac_cong_rifleman_type56"},
			"nva_dac_cong_rifleman_k50m",
			{"nva_dac_cong_sapper_k50m", "nva_dac_cong_rifleman_k50m"},
			{"nva_dac_cong_machinegunner_rpd", "nva_dac_cong_rifleman_k50m"},
			{"nva_dac_cong_marksman_sksSniper", "nva_dac_cong_rifleman_k50m"}
		};
		
		nva_dac_cong_at[] = {
			"nva_dac_cong_at_type56_rpg7",
			"nva_dac_cong_at_type56_rpg7",
			{"nva_dac_cong_rifleman_sksBayo_izh54P", "nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1"},
			"nva_dac_cong_rifleman_k50m",
			{"nva_dac_cong_rifleman_k50m", "nva_dac_cong_medic_k50m"}
		};	
			
		nva_dac_cong_cover_element[] = {
				"nva_dac_cong_machinegunner_rpd",
				"nva_dac_cong_marksman_sksSniper",
				{"nva_dac_cong_machinegunner_rpd", "nva_dac_cong_marksman_sksSniper"},
				"nva_dac_cong_rifleman_sksBayo_izh54P",
				{"nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1"}
		};

		nva_dac_cong_storm_element[] = {
				"nva_dac_cong_rifleman_k50m",
				"nva_dac_cong_medic_k50m",
				{"nva_dac_cong_rto_izh54", "nva_dac_cong_sapper_k50m"},
				{"nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1"},
				"nva_dac_cong_rifleman_sksBayo_izh54P"
		};
		
		nva_dac_cong_sentry[] = {
			"nva_dac_cong_sentry_sksBayo",
			{"nva_dac_cong_rifleman_k50m", "nva_dac_cong_rifleman_sksBayo_izh54P", "nva_dac_cong_rifleman_type56", "nva_dac_cong_rifleman_type56Bayo_0", "nva_dac_cong_rifleman_type56Bayo_1", "nva_dac_cong_machinegunner_rpd", "nva_dac_cong_marksman_sksSniper"}
		};       
		
		nva_d_patrol[] = {
			{"nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
			{"nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
			{"nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo", "nva_d_marksman_sksSniper", "nva_d_machinegunner_rpd"},
			"nva_d_rifleman_k50m"
		};

		nva_d_standard[] = {
			"nva_d_officer_k50m",
			{"nva_d_rifleman_k50m", "nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
			"nva_d_medic_k50m",
			"nva_d_at_sks_rpg7",
			{"nva_d_rto_k50m", "nva_d_rifleman_k50m"},
			{"nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
			{"nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo"},
		    {"nva_d_sapper_k50m", "nva_d_rifleman_k50m"},
		    {"nva_d_machinegunner_rpd", "nva_d_rifleman_k50m"},
			{"nva_d_marksman_sksSniper", "nva_d_rifleman_k50m"}
	    };
		
        nva_d_at[] = { 
			"nva_d_at_sks_rpg7",
			"nva_d_at_sks_rgp7",
			{"nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
		    {"nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo"},
			{"nva_d_rifleman_k50m", "nva_d_medic_k50m"}
		};	
				 
		nva_d_mortar[] = { 
			"nva_d_mortar_ammo_pps52",
			"nva_d_mortar_gunner_pps43",
			"nva_d_mortar_tripod_k50m",
			"nva_d_rto_k50m",
			{"nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_grenadier_sksGl"},
			{"nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo"}
		};	
				 
		nva_d_cover_element[] = {
			"nva_d_machinegunner_rpd",
			"nva_d_marksman_sksSniper",
			{"nva_d_marksman_sksSniper", "nva_d_machinegunner_rpd"},
			{"nva_d_grenadier_sksGl", "nva_d_rifleman_sks", "nva_d_rifleman_sksBayo"},
			{"nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo"}
		};
		 
		nva_d_storm_element[] = {
			"nva_d_rifleman_k50m",
			"nva_d_medic_k50m",
			{"nva_d_rto_k50m", "nva_d_sapper_k50m"},
		    {"nva_d_rifleman_sksBayo", "nva_d_rifleman_type56Bayo"},
		    {"nva_d_rifleman_sksBayo", "nva_d_rifleman_type56Bayo"},
			"nva_d_rifleman_k50m"
		};

        nva_d_sentry[] = {
			"nva_d_sentry_sksBayo",
			{"nva_d_rifleman_k50m", "nva_d_rifleman_sks", "nva_d_rifleman_sksBayo", "nva_d_rifleman_type56", "nva_d_rifleman_type56Bayo", "nva_d_marksman_sksSniper", "nva_d_machinegunner_rpd"}
		};

		nva_65_d_patrol[] = {
			{"nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_grenadier_sksGl"},
			{"nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_grenadier_sksGl"},
			{"nva_65_d_rifleman_type56", "nva_65_d_rifleman_type56Bayo", "nva_65_d_marksman_sksSniper", "nva_65_d_machinegunner_rpd"},
			"nva_65_d_rifleman_k50m"
		};

		nva_65_d_standard[] = {
			"nva_65_d_officer_k50m",
			{"nva_65_d_rifleman_k50m", "nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_grenadier_sksGl"},
			"nva_65_d_medic_k50m",
			"nva_65_d_at_sks_rpg7",
			{"nva_65_d_rto_k50m", "nva_65_d_rifleman_k50m"},
			{"nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_grenadier_sksGl"},
			{"nva_65_d_rifleman_type56", "nva_65_d_rifleman_type56Bayo"},
		    {"nva_65_d_sapper_k50m", "nva_65_d_rifleman_k50m"},
		    {"nva_65_d_machinegunner_rpd", "nva_65_d_rifleman_k50m"},
			{"nva_65_d_marksman_sksSniper", "nva_65_d_rifleman_k50m"}
	    };
		
        nva_65_d_at[] = { 
			"nva_65_d_at_sks_rpg7",
			"nva_65_d_at_sks_rgp7",
			{"nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_grenadier_sksGl"},
		    {"nva_65_d_rifleman_type56", "nva_65_d_rifleman_type56Bayo"},
			{"nva_65_d_rifleman_k50m", "nva_65_d_medic_k50m"}
		};		
				 
		nva_65_d_cover_element[] = {
			"nva_65_d_machinegunner_rpd",
			"nva_65_d_marksman_sksSniper",
			{"nva_65_d_marksman_sksSniper", "nva_65_d_machinegunner_rpd"},
			{"nva_65_d_grenadier_sksGl", "nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo"},
			{"nva_65_d_rifleman_type56", "nva_65_d_rifleman_type56Bayo"}
		};
		 
		nva_65_d_storm_element[] = {
			"nva_65_d_rifleman_k50m",
			"nva_65_d_medic_k50m",
			{"nva_65_d_rto_k50m", "nva_65_d_sapper_k50m"},
		    {"nva_65_d_rifleman_sksBayo", "nva_65_d_rifleman_type56Bayo"},
		    {"nva_65_d_rifleman_sksBayo", "nva_65_d_rifleman_type56Bayo"},
			"nva_65_d_rifleman_k50m"
		};

        nva_65_d_sentry[] = {
			"nva_65_d_sentry_sksBayo",
			{"nva_65_d_rifleman_k50m", "nva_65_d_rifleman_sks", "nva_65_d_rifleman_sksBayo", "nva_65_d_rifleman_type56", "nva_65_d_rifleman_type56Bayo", "nva_65_d_marksman_sksSniper", "nva_65_d_machinegunner_rpd"}
		};
		
		nva_65_patrol[] = {
			{"nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_grenadier_sksGl"},
			{"nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_grenadier_sksGl"},
			{"nva_65_rifleman_type56", "nva_65_rifleman_type56Bayo", "nva_65_marksman_sksSniper", "nva_65_machinegunner_rpd"},
			"nva_65_rifleman_k50m"
		};

		nva_65_standard[] = {
			"nva_65_officer_k50m",
			{"nva_65_rifleman_k50m", "nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_grenadier_sksGl"},
			"nva_65_medic_k50m",
			"nva_65_at_sks_rpg7",
			{"nva_65_rto_k50m", "nva_65_rifleman_k50m"},
			{"nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_grenadier_sksGl"},
			{"nva_65_rifleman_type56", "nva_65_rifleman_type56Bayo"},
		    {"nva_65_sapper_k50m", "nva_65_rifleman_k50m"},
		    {"nva_65_machinegunner_rpd", "nva_65_rifleman_k50m"},
			{"nva_65_marksman_sksSniper", "nva_65_rifleman_k50m"}
	    };
		
        nva_65_at[] = { 
			"nva_65_at_sks_rpg7",
			"nva_65_at_sks_rgp7",
			{"nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_grenadier_sksGl"},
		    {"nva_65_rifleman_type56", "nva_65_rifleman_type56Bayo"},
			{"nva_65_rifleman_k50m", "nva_65_medic_k50m"}
		};		
				 
		nva_65_cover_element[] = {
			"nva_65_machinegunner_rpd",
			"nva_65_marksman_sksSniper",
			{"nva_65_marksman_sksSniper", "nva_65_machinegunner_rpd"},
			{"nva_65_grenadier_sksGl", "nva_65_rifleman_sks", "nva_65_rifleman_sksBayo"},
			{"nva_65_rifleman_type56", "nva_65_rifleman_type56Bayo"}
		};
		 
		nva_65_storm_element[] = {
			"nva_65_rifleman_k50m",
			"nva_65_medic_k50m",
			{"nva_65_rto_k50m", "nva_65_sapper_k50m"},
		    {"nva_65_rifleman_sksBayo", "nva_65_rifleman_type56Bayo"},
		    {"nva_65_rifleman_sksBayo", "nva_65_rifleman_type56Bayo"},
			"nva_65_rifleman_k50m"
		};

        nva_65_sentry[] = {
			"nva_65_sentry_sksBayo",
			{"nva_65_rifleman_k50m", "nva_65_rifleman_sks", "nva_65_rifleman_sksBayo", "nva_65_rifleman_type56", "nva_65_rifleman_type56Bayo", "nva_65_marksman_sksSniper", "nva_65_machinegunner_rpd"}
		};
		
	};	

	class guer
	{
		patrol[] = {
			"arvn_squad_leaders",
			"arvn_rtos",
			{"arvn_riflemen", "arvn_scouts"},
			{"arvn_medics", "arvn_marksmen"},
			{"arvn_grenadiers", "arvn_riflemen"}
		};

		standard[] = {
			"arvn_squad_leaders",
			"arvn_rtos",
			{"arvn_riflemen", "arvn_scouts"},
			{"arvn_medics", "arvn_marksmen"},
			{"arvn_grenadiers", "arvn_riflemen"}
		};
	};
};