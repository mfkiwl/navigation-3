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
 * @file TF2Message.cpp
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

#include "TF2Message.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

TF2Message::TF2Message()
{
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@69b2283a
    m_index = 0;
    // m_isStatic com.eprosima.idl.parser.typecode.PrimitiveTypeCode@22a637e7
    m_isStatic = false;
    // m_serialized com.eprosima.idl.parser.typecode.SequenceTypeCode@6fe7aac8


}

TF2Message::~TF2Message()
{


}

TF2Message::TF2Message(
        const TF2Message& x)
{
    m_index = x.m_index;
    m_isStatic = x.m_isStatic;
    m_serialized = x.m_serialized;
}

TF2Message::TF2Message(
        TF2Message&& x)
{
    m_index = x.m_index;
    m_isStatic = x.m_isStatic;
    m_serialized = std::move(x.m_serialized);
}

TF2Message& TF2Message::operator =(
        const TF2Message& x)
{

    m_index = x.m_index;
    m_isStatic = x.m_isStatic;
    m_serialized = x.m_serialized;

    return *this;
}

TF2Message& TF2Message::operator =(
        TF2Message&& x)
{

    m_index = x.m_index;
    m_isStatic = x.m_isStatic;
    m_serialized = std::move(x.m_serialized);

    return *this;
}

size_t TF2Message::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (1024 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t TF2Message::getCdrSerializedSize(
        const TF2Message& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.serialized().size() > 0)
    {
        current_alignment += (data.serialized().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void TF2Message::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_index;
    scdr << m_isStatic;
    scdr << m_serialized;

}

void TF2Message::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_index;
    dcdr >> m_isStatic;
    dcdr >> m_serialized;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void TF2Message::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t TF2Message::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& TF2Message::index()
{
    return m_index;
}

/*!
 * @brief This function sets a value in member isStatic
 * @param _isStatic New value for member isStatic
 */
void TF2Message::isStatic(
        bool _isStatic)
{
    m_isStatic = _isStatic;
}

/*!
 * @brief This function returns the value of member isStatic
 * @return Value of member isStatic
 */
bool TF2Message::isStatic() const
{
    return m_isStatic;
}

/*!
 * @brief This function returns a reference to member isStatic
 * @return Reference to member isStatic
 */
bool& TF2Message::isStatic()
{
    return m_isStatic;
}

/*!
 * @brief This function copies the value in member serialized
 * @param _serialized New value to be copied in member serialized
 */
void TF2Message::serialized(
        const std::vector<char>& _serialized)
{
    m_serialized = _serialized;
}

/*!
 * @brief This function moves the value in member serialized
 * @param _serialized New value to be moved in member serialized
 */
void TF2Message::serialized(
        std::vector<char>&& _serialized)
{
    m_serialized = std::move(_serialized);
}

/*!
 * @brief This function returns a constant reference to member serialized
 * @return Constant reference to member serialized
 */
const std::vector<char>& TF2Message::serialized() const
{
    return m_serialized;
}

/*!
 * @brief This function returns a reference to member serialized
 * @return Reference to member serialized
 */
std::vector<char>& TF2Message::serialized()
{
    return m_serialized;
}

size_t TF2Message::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool TF2Message::isKeyDefined()
{
    return false;
}

void TF2Message::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}