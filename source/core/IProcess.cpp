#include "core/IProcess.h"

#include <cstdio>
#include <cstring>

namespace dai {

    const int END_PROGRAM = 0x00;
    static const program_t null_program = {.name = nullptr, .type = END_PROGRAM};

    program_t programs[] = {
            {.name = "hello", .type = END_PROGRAM + 1},
            {.name = "chap9_01.chat server", .type = END_PROGRAM + 2},
            null_program
    };

    static const auto program_number = sizeof(programs) / sizeof(program_t);

    int getTypeByName(const char *name) {
        for (int i = 0; i < program_number; ++i) {
            if (0 == ::strcmp(name, programs[i].name))
                return programs[i].type;
        }
        return END_PROGRAM;
    }

    const char *getNameByType(int type) {
        for (int i = 0; i < program_number; ++i) {
            if (programs[i].type == type)
                return programs[i].name;
        }
        return nullptr;
    }

    static bool isEmptyProject(const program_t &data) {
        return data.name == nullptr && data.type == END_PROGRAM;
    }


    void display_program_list() {
        for (int i = 0; i < program_number; ++i) {
            if (!isEmptyProject(programs[i])) {
                ::printf("type: %05d, name: %s\n", programs[i].type, programs[i].name);
            }
        }
    }


}