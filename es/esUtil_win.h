#pragma once

#ifndef ESUTIL_WIN_H
#define ESUTIL_WIN_H 1

#ifdef __cplusplus
extern "C" {
#endif

GLboolean WinCreate(ESContext* esContext,
                    const char* title);

void WinLoop(ESContext* esContext);

int WinTGALoad(const char* fileName,
               char** buffer,
               int* width,
               int* height);

#ifdef __cplusplus
}
#endif

#endif
