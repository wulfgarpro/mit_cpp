#ifdef DEBUG
#define DEBUG_MSG(str) do { std::cout << str << std::endl; } while( false )
#else
#define DEBUG_MSG(str) do { } while ( false )
#endif

int main()
{
    DEBUG_MSG("Hello" << ' ' << "World!" << 1 );
    return 0;
}
