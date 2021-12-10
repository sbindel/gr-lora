/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(debugger.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7f42d6dddb1e9acd3d70016f34901510)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lora/debugger.h>
// pydoc.h is automatically generated in the build directory
#include <debugger_pydoc.h>

void bind_debugger(py::module& m)
{

    using debugger    = ::gr::lora::debugger;


    py::class_<debugger,
        std::shared_ptr<debugger>>(m, "debugger", D(debugger))

        .def(py::init<>(),D(debugger,debugger,0))
        .def(py::init<gr::lora::debugger const &>(),           py::arg("arg0"),
           D(debugger,debugger,1)
        )


        
        .def("attach",&debugger::attach,       
            py::arg("path") = "/tmp/gr_lora.sock",
            D(debugger,attach)
        )


        
        .def("detach",&debugger::detach,       
            D(debugger,detach)
        )


        
        .def("analyze_samples",&debugger::analyze_samples,       
            py::arg("clear"),
            py::arg("draw_over"),
            D(debugger,analyze_samples)
        )


        
        .def("store_samples",&debugger::store_samples,       
            py::arg("samples"),
            py::arg("length"),
            D(debugger,store_samples)
        )

        ;




}







