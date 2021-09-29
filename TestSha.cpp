#include "stdafx.h"
#ifdef _UNIT_TEST
#include "Unit_Main.h"
#include "sha.h"
#include "sha_mod.h"

using string = std::string;
namespace
{
	constexpr const __int64 repeat = 100000;
	//sample-results from zedwood.com, thegrape_mod* should have same results as thegrape_orig*
	const string input = "grape";
	const string expected224 = "571f3896fb694dc268b032d7940dabbfbcd7ee64c07f45c01c9e64db";
	const string expected256 = "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496";
	const string expected384 = "c2dafc387656342580027e2dbbbc2afcc77df4294b2542a983cf225735b88821302b9fa3c5948ba48b8dacd43da156d9";
	const string expected512 = "9375d1abdb644a01955bccad12e2f5c2bd8a3e226187e548d99c559a99461453b980123746753d07c169c22a5d9cc75cb158f0e8d8c0e713559775b5e1391fc4";
}

TEST(ShaTest, thegrape_sizestats)
{
	constexpr const size_t szSha__2_orig = sizeof(sha_orig::SHA2);
	constexpr const size_t szSha224_orig = sizeof(sha_orig::SHA224);
	constexpr const size_t szSha256_orig = sizeof(sha_orig::SHA256);
	constexpr const size_t szSha384_orig = sizeof(sha_orig::SHA384);
	constexpr const size_t szSha512_orig = sizeof(sha_orig::SHA512);

	constexpr const size_t szSha__2_mod = sizeof(sha_mod::SHA2<1,1,short>);
	constexpr const size_t szSha224_mod = sizeof(sha_mod::SHA224);
	constexpr const size_t szSha256_mod = sizeof(sha_mod::SHA256);
	constexpr const size_t szSha384_mod = sizeof(sha_mod::SHA384);
	constexpr const size_t szSha512_mod = sizeof(sha_mod::SHA512);
}

TEST( ShaTest, thegrape_orig512 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_orig::sha512( input );
		ASSERT_TRUE( output.compare( expected512 ) == 0 );
	}
}

TEST( ShaTest, thegrape_orig384 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_orig::sha384( input );
		ASSERT_TRUE( output.compare( expected384 ) == 0 );
	}
}

TEST( ShaTest, thegrape_orig256 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_orig::sha256( input );
		ASSERT_TRUE( output.compare( expected256 ) == 0 );
	}
}

TEST( ShaTest, thegrape_orig224 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_orig::sha224( input );
		ASSERT_TRUE( output.compare( expected224 ) == 0 );
	}
}


//-----------------------

TEST( ShaTest, thegrape_mod512 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_mod::sha512( input );
		ASSERT_TRUE( output.compare( expected512 ) == 0 );
	}
}

TEST( ShaTest, thegrape_mod384 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_mod::sha384( input );
		ASSERT_TRUE( output.compare( expected384 ) == 0 );
	}
}

TEST( ShaTest, thegrape_mod256 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_mod::sha256( input );
		ASSERT_TRUE( output.compare( expected256 ) == 0 );
	}
}

TEST( ShaTest, thegrape_mod224 )
{
	__int64 s = repeat;
	while( s-- > 0 )
	{
		string output = sha_mod::sha224( input );
		ASSERT_TRUE( output.compare( expected224 ) == 0 );
	}
}



#endif