/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_EffekseerNative_WRAP_H_
#define SWIG_EffekseerNative_WRAP_H_

class SwigDirector_GUIManagerCallback : public efk::GUIManagerCallback, public Swig::Director {

public:
    SwigDirector_GUIManagerCallback();
    virtual ~SwigDirector_GUIManagerCallback();
    virtual void Resized(int x, int y);
    virtual void Droped();
    virtual void Focused();
    virtual bool Closing();
    virtual void Iconify(int f);
    virtual void DpiChanged(float scale);
    virtual bool ClickLink(char16_t const *path);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, int);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef unsigned int (SWIGSTDCALL* SWIG_Callback3_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(int);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(float);
    typedef unsigned int (SWIGSTDCALL* SWIG_Callback6_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackResized, SWIG_Callback1_t callbackDroped, SWIG_Callback2_t callbackFocused, SWIG_Callback3_t callbackClosing, SWIG_Callback4_t callbackIconify, SWIG_Callback5_t callbackDpiChanged, SWIG_Callback6_t callbackClickLink);

private:
    SWIG_Callback0_t swig_callbackResized;
    SWIG_Callback1_t swig_callbackDroped;
    SWIG_Callback2_t swig_callbackFocused;
    SWIG_Callback3_t swig_callbackClosing;
    SWIG_Callback4_t swig_callbackIconify;
    SWIG_Callback5_t swig_callbackDpiChanged;
    SWIG_Callback6_t swig_callbackClickLink;
    void swig_init_callbacks();
};

class SwigDirector_IOCallback : public Effekseer::IOCallback, public Swig::Director {

public:
    SwigDirector_IOCallback();
    virtual void OnFileChanged(Effekseer::StaticFileType fileType, char16_t const *path);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnFileChanged);

private:
    SWIG_Callback0_t swig_callbackOnFileChanged;
    void swig_init_callbacks();
};


#endif