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
        return 0;
        break;
    default:
        break;
    }
    return 0;
}

int pagr()
{
    int rez = system("ls -l | wc -l");
    srvlog("Main module stopped.");
    return 0; // The end
}

