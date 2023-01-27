
class GAME_STATE_HANDLER
{
public:

	static void InitOffsets()
	{
		constexpr const char* SetGameState = "0x27F8AE";
		constexpr const char* SetGameWaitingState = "0x27F95C";
		constexpr const char* SetGameEndingState = "0x27F7FC";
		constexpr const char* UpdateGameEnding = "0x2BA3AB";
		constexpr const char* UpdateGamePlaying = "0x2BB40D";
		constexpr const char* UpdateGameWaiting = "0x2BB5FF";


	}

	


};

class CONNECTIONMANAGER
{
public:
	static void InitOffsets()
	{
		constexpr const char* Update = "0x2A6D1E";
		constexpr const char* DecompressStateData = "0x16576B8";
		constexpr const char* CompressStateData = "0x1ADBBE";
		constexpr const char* UploadUserData = "0x2CBB18";
	}




		



};
