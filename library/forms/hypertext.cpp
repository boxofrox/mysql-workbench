/*
 * Copyright (c) 2011, 2017, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#include "mforms/mforms.h"

using namespace mforms;

//--------------------------------------------------------------------------------------------------

HyperText::HyperText() {
  _hypertext_impl = &ControlFactory::get_instance()->_hypertext_impl;

  _hypertext_impl->create(this);
}

//--------------------------------------------------------------------------------------------------

void HyperText::handle_url_click(const std::string &url) {
  _url_click_signal(url);
}

//--------------------------------------------------------------------------------------------------

void HyperText::set_markup_text(const std::string &text) {
  _hypertext_impl->set_markup_text(this, text);
}

//--------------------------------------------------------------------------------------------------

void HyperText::set_padding(int left, int top, int right, int bottom) {
  set_layout_dirty(true);
  if (_view_impl->set_padding)
    (*_view_impl->set_padding)(this, left, top, right, bottom);
}

//--------------------------------------------------------------------------------------------------
