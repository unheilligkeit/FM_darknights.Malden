class TFW
{

	tag = "TFW";

	class server
	{
		file = "functions\server";
		class zeusObjects {};
		class drohnspawn {};
	};

	class ai
	{
		file = "functions\ai";
		class groupattack {};
		class groupdefens {};
		class hunting {};
		class spawnjet {};
	};

	class client
	{
		file = "functions\client";
		class disco {};
		class aircommander {};
		class fpszeus {};
	};
};
