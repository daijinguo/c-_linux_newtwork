#ifndef _IPROCESS_H_
#define _IPROCESS_H_

namespace dai {

    class IProcess {
    public:
        IProcess() = default;

        virtual ~IProcess() {}

        virtual void Usage() = 0;

        virtual int Run(int, char **) = 0;
    };


    /**
     * The structure of the program
     */
    typedef struct program_s {
        const char *name;
        int type;
    } program_t;

    /**
     * the array of programs
     */
    extern program_t programs[];

    /**
     * this null program type value: 0
     */
    extern const int END_PROGRAM;

    /**
     * get program type by program name
     * @return program type
     */
    extern int getTypeByName(const char *);

    /**
     * get the program name string by the program type
     * @return program name string
     */
    extern const char *getNameByType(int);


    /**
     * display the all program lists
     */
    extern void display_program_list();

}

#endif //_IPROCESS_H_
