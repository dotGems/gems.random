#include <eosio/eosio.hpp>
#include <gems.random/random.gems.hpp>

using namespace eosio;
using namespace std;
using namespace gems;

class [[eosio::contract("tester")]] tester : public eosio::contract {
public:

    tester(eosio::name rec, eosio::name code, eosio::datastream<const char*> ds)
      : eosio::contract(rec, code, ds)
    {};

    [[eosio::action]]
    void test1( const uint8_t size )
    {
        print_r( random::generate( size ) );
    }

    [[eosio::action]]
    void test2( const uint8_t size, int64_t min_val, int64_t max_value )
    {
        print_r( random::generate( size, min_val, max_value ) );
    }

    [[eosio::action]]
    void test3( const uint8_t size, checksum256 checksum )
    {
        print_r( random::generate( size, checksum ) );
    }

    [[eosio::action]]
    void test4( const uint8_t size, time_point time )
    {
        print_r( random::generate( size, time ) );
    }

    [[eosio::action]]
    void test5(
        const uint8_t size,
        checksum256 checksum,
        time_point time,
        int64_t min_value,
        int64_t max_value,
        uint64_t salt,
        bool unique )
    {
        print_r( random::generate( size, checksum, time, min_value, max_value, salt, unique ) );
    }

    void print_r( vector<int64_t> arr )
    {
        for( auto num: arr){
            print(num, " ");
        }
    }

};
