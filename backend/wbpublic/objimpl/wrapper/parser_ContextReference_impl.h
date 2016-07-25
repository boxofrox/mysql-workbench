/*
 * Copyright (c) 2014, 2016, Oracle and/or its affiliates. All rights reserved.
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

#include "grts/structs.wrapper.h"
#include "grtsqlparser/mysql_parser_services.h"

GRT_STRUCTS_WRAPPER_PUBLIC parser::MySQLParserContext::Ref parser_context_from_grt(parser_ContextReferenceRef object);
GRT_STRUCTS_WRAPPER_PUBLIC parser_ContextReferenceRef parser_context_to_grt(const parser::MySQLParserContext::Ref &context);
