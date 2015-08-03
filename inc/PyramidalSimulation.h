/*******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2011, 2013 OpenWorm.
 * http://openworm.org
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the MIT License
 * which accompanies this distribution, and is available at
 * http://opensource.org/licenses/MIT
 *
 * Contributors:
 *     	OpenWorm - http://openworm.org/people.html
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 *******************************************************************************/

#ifndef PYRAMIDALSIMULATION_H
#define PYRAMIDALSIMULATION_H
//#include "/usr/include/python2.7/Python.h"  //need to fix
//#define MS_NO_COREDLL
#if defined(_WIN32) || defined (_WIN64)
  #include "C:/Python27/include/Python.h" // TODO make it optional
#else
  #include <Python.h>
#endif
#include <vector>

//#pragma comment( lib, "C:\\Python27\\libs\\python27.lib" )
//#pragma comment( lib, "C:/Python26/libs/python26.lib" )
//#pragma comment( lib, "C:/Python26/libs/python26.lib" )

using namespace std;



class PyramidalSimulation{

 private:
  PyObject *pName, *pModule, *pDict, *pFunc, *pValue, *pClass, *pInstance;
  vector<float> unpackPythonList(PyObject*);

 public:
  int setup();
  vector<float> run();

};

#endif
