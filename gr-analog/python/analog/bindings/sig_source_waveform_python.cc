/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/sig_source_waveform.h>

void bind_sig_source_waveform(py::module& m)
{

    py::enum_<gr::analog::gr_waveform_t>(m, "gr_waveform_t")
        .value("GR_CONST_WAVE", gr::analog::GR_CONST_WAVE) // 100
        .value("GR_SIN_WAVE", gr::analog::GR_SIN_WAVE)     // 101
        .value("GR_COS_WAVE", gr::analog::GR_COS_WAVE)     // 102
        .value("GR_SQR_WAVE", gr::analog::GR_SQR_WAVE)     // 103
        .value("GR_TRI_WAVE", gr::analog::GR_TRI_WAVE)     // 104
        .value("GR_SAW_WAVE", gr::analog::GR_SAW_WAVE)     // 105
        .export_values();
}