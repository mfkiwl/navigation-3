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
 * @file NodeControlCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _NODECONTROLCOMMAND_H_
#define _NODECONTROLCOMMAND_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(NodeControlCommand_SOURCE)
#define NodeControlCommand_DllAPI __declspec( dllexport )
#else
#define NodeControlCommand_DllAPI __declspec( dllimport )
#endif // NodeControlCommand_SOURCE
#else
#define NodeControlCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define NodeControlCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure NodeControlCommand defined by the user in the IDL file.
 * @ingroup NODECONTROLCOMMAND
 */
class NodeControlCommand
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NodeControlCommand();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NodeControlCommand();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NodeControlCommand that will be copied.
     */
    eProsima_user_DllExport NodeControlCommand(
            const NodeControlCommand& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NodeControlCommand that will be copied.
     */
    eProsima_user_DllExport NodeControlCommand(
            NodeControlCommand&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NodeControlCommand that will be copied.
     */
    eProsima_user_DllExport NodeControlCommand& operator =(
            const NodeControlCommand& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NodeControlCommand that will be copied.
     */
    eProsima_user_DllExport NodeControlCommand& operator =(
            NodeControlCommand&& x);

    /*!
     * @brief This function sets a value in member type
     * @param _type New value for member type
     */
    eProsima_user_DllExport void type(
            char _type);

    /*!
     * @brief This function returns the value of member type
     * @return Value of member type
     */
    eProsima_user_DllExport char type() const;

    /*!
     * @brief This function returns a reference to member type
     * @return Reference to member type
     */
    eProsima_user_DllExport char& type();

    /*!
     * @brief This function sets a value in member do_mapping
     * @param _do_mapping New value for member do_mapping
     */
    eProsima_user_DllExport void do_mapping(
            char _do_mapping);

    /*!
     * @brief This function returns the value of member do_mapping
     * @return Value of member do_mapping
     */
    eProsima_user_DllExport char do_mapping() const;

    /*!
     * @brief This function returns a reference to member do_mapping
     * @return Reference to member do_mapping
     */
    eProsima_user_DllExport char& do_mapping();

    /*!
     * @brief This function copies the value in member map_path
     * @param _map_path New value to be copied in member map_path
     */
    eProsima_user_DllExport void map_path(
            const std::string& _map_path);

    /*!
     * @brief This function moves the value in member map_path
     * @param _map_path New value to be moved in member map_path
     */
    eProsima_user_DllExport void map_path(
            std::string&& _map_path);

    /*!
     * @brief This function returns a constant reference to member map_path
     * @return Constant reference to member map_path
     */
    eProsima_user_DllExport const std::string& map_path() const;

    /*!
     * @brief This function returns a reference to member map_path
     * @return Reference to member map_path
     */
    eProsima_user_DllExport std::string& map_path();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const NodeControlCommand& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    char m_type;
    char m_do_mapping;
    std::string m_map_path;
};

#endif // _NODECONTROLCOMMAND_H_