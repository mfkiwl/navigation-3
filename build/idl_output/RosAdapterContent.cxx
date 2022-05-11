// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file RosAdapterContent.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "RosAdapterContent.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

RosAdapterContent::RosAdapterContent()
{
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@33afa13b
    m_type = 0;
    // m_serialized com.eprosima.idl.parser.typecode.SequenceTypeCode@7a4ccb53


}

RosAdapterContent::~RosAdapterContent()
{

}

RosAdapterContent::RosAdapterContent(
        const RosAdapterContent& x)
{
    m_type = x.m_type;
    m_serialized = x.m_serialized;
}

RosAdapterContent::RosAdapterContent(
        RosAdapterContent&& x)
{
    m_type = x.m_type;
    m_serialized = std::move(x.m_serialized);
}

RosAdapterContent& RosAdapterContent::operator =(
        const RosAdapterContent& x)
{

    m_type = x.m_type;
    m_serialized = x.m_serialized;

    return *this;
}

RosAdapterContent& RosAdapterContent::operator =(
        RosAdapterContent&& x)
{

    m_type = x.m_type;
    m_serialized = std::move(x.m_serialized);

    return *this;
}

size_t RosAdapterContent::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (40960 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t RosAdapterContent::getCdrSerializedSize(
        const RosAdapterContent& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.serialized().size() > 0)
    {
        current_alignment += (data.serialized().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void RosAdapterContent::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_type;
    scdr << m_serialized;

}

void RosAdapterContent::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_type;
    dcdr >> m_serialized;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void RosAdapterContent::type(
        char _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
char RosAdapterContent::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
char& RosAdapterContent::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member serialized
 * @param _serialized New value to be copied in member serialized
 */
void RosAdapterContent::serialized(
        const std::vector<char>& _serialized)
{
    m_serialized = _serialized;
}

/*!
 * @brief This function moves the value in member serialized
 * @param _serialized New value to be moved in member serialized
 */
void RosAdapterContent::serialized(
        std::vector<char>&& _serialized)
{
    m_serialized = std::move(_serialized);
}

/*!
 * @brief This function returns a constant reference to member serialized
 * @return Constant reference to member serialized
 */
const std::vector<char>& RosAdapterContent::serialized() const
{
    return m_serialized;
}

/*!
 * @brief This function returns a reference to member serialized
 * @return Reference to member serialized
 */
std::vector<char>& RosAdapterContent::serialized()
{
    return m_serialized;
}

size_t RosAdapterContent::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool RosAdapterContent::isKeyDefined()
{
    return false;
}

void RosAdapterContent::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

NavMapContent::NavMapContent()
{
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@309e345f
    m_type = 0;
    // m_serialized com.eprosima.idl.parser.typecode.SequenceTypeCode@56a6d5a6


}

NavMapContent::~NavMapContent()
{

}

NavMapContent::NavMapContent(
        const NavMapContent& x)
{
    m_type = x.m_type;
    m_serialized = x.m_serialized;
}

NavMapContent::NavMapContent(
        NavMapContent&& x)
{
    m_type = x.m_type;
    m_serialized = std::move(x.m_serialized);
}

NavMapContent& NavMapContent::operator =(
        const NavMapContent& x)
{

    m_type = x.m_type;
    m_serialized = x.m_serialized;

    return *this;
}

NavMapContent& NavMapContent::operator =(
        NavMapContent&& x)
{

    m_type = x.m_type;
    m_serialized = std::move(x.m_serialized);

    return *this;
}

size_t NavMapContent::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (16777216 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t NavMapContent::getCdrSerializedSize(
        const NavMapContent& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.serialized().size() > 0)
    {
        current_alignment += (data.serialized().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void NavMapContent::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_type;
    scdr << m_serialized;

}

void NavMapContent::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_type;
    dcdr >> m_serialized;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void NavMapContent::type(
        char _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
char NavMapContent::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
char& NavMapContent::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member serialized
 * @param _serialized New value to be copied in member serialized
 */
void NavMapContent::serialized(
        const std::vector<char>& _serialized)
{
    m_serialized = _serialized;
}

/*!
 * @brief This function moves the value in member serialized
 * @param _serialized New value to be moved in member serialized
 */
void NavMapContent::serialized(
        std::vector<char>&& _serialized)
{
    m_serialized = std::move(_serialized);
}

/*!
 * @brief This function returns a constant reference to member serialized
 * @return Constant reference to member serialized
 */
const std::vector<char>& NavMapContent::serialized() const
{
    return m_serialized;
}

/*!
 * @brief This function returns a reference to member serialized
 * @return Reference to member serialized
 */
std::vector<char>& NavMapContent::serialized()
{
    return m_serialized;
}

size_t NavMapContent::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool NavMapContent::isKeyDefined()
{
    return false;
}

void NavMapContent::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}
