int main()
{
    switch(fork())
    {
    case -1:
        printf("Fork error\n");
        return -1;
    case 0:
        if(setsid() == -1)
            break;
        pagr();
        exit(0);
        break;
    default:
        break;
    }
    return 0;
}

int pagr()
{
    srvlog("Main module stopped.");
    return 0; // The end
}