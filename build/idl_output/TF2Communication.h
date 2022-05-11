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
 * @file TF2Communication.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _TF2COMMUNICATION_H_
#define _TF2COMMUNICATION_H_


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
#if defined(TF2Communication_SOURCE)
#define TF2Communication_DllAPI __declspec( dllexport )
#else
#define TF2Communication_DllAPI __declspec( dllimport )
#endif // TF2Communication_SOURCE
#else
#define TF2Communication_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TF2Communication_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure TF2RequestTime defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
class TF2RequestTime
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TF2RequestTime();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TF2RequestTime();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TF2RequestTime that will be copied.
     */
    eProsima_user_DllExport TF2RequestTime(
            const TF2RequestTime& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TF2RequestTime that will be copied.
     */
    eProsima_user_DllExport TF2RequestTime(
            TF2RequestTime&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TF2RequestTime that will be copied.
     */
    eProsima_user_DllExport TF2RequestTime& operator =(
            const TF2RequestTime& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TF2RequestTime that will be copied.
     */
    eProsima_user_DllExport TF2RequestTime& operator =(
            TF2RequestTime&& x);

    /*!
     * @brief This function sets a value in member time_sec
     * @param _time_sec New value for member time_sec
     */
    eProsima_user_DllExport void time_sec(
            uint32_t _time_sec);

    /*!
     * @brief This function returns the value of member time_sec
     * @return Value of member time_sec
     */
    eProsima_user_DllExport uint32_t time_sec() const;

    /*!
     * @brief This function returns a reference to member time_sec
     * @return Reference to member time_sec
     */
    eProsima_user_DllExport uint32_t& time_sec();

    /*!
     * @brief This function sets a value in member time_nsec
     * @param _time_nsec New value for member time_nsec
     */
    eProsima_user_DllExport void time_nsec(
            uint32_t _time_nsec);

    /*!
     * @brief This function returns the value of member time_nsec
     * @return Value of member time_nsec
     */
    eProsima_user_DllExport uint32_t time_nsec() const;

    /*!
     * @brief This function returns a reference to member time_nsec
     * @return Reference to member time_nsec
     */
    eProsima_user_DllExport uint32_t& time_nsec();


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
            const TF2RequestTime& data,
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

    uint32_t m_time_sec;
    uint32_t m_time_nsec;
};
/*!
 * @brief This class represents the structure TF2RequestDuration defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
class TF2RequestDuration
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TF2RequestDuration();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TF2RequestDuration();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TF2RequestDuration that will be copied.
     */
    eProsima_user_DllExport TF2RequestDuration(
            const TF2RequestDuration& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TF2RequestDuration that will be copied.
     */
    eProsima_user_DllExport TF2RequestDuration(
            TF2RequestDuration&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TF2RequestDuration that will be copied.
     */
    eProsima_user_DllExport TF2RequestDuration& operator =(
            const TF2RequestDuration& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TF2RequestDuration that will be copied.
     */
    eProsima_user_DllExport TF2RequestDuration& operator =(
            TF2RequestDuration&& x);

    /*!
     * @brief This function sets a value in member duration_sec
     * @param _duration_sec New value for member duration_sec
     */
    eProsima_user_DllExport void duration_sec(
            int32_t _duration_sec);

    /*!
     * @brief This function returns the value of member duration_sec
     * @return Value of member duration_sec
     */
    eProsima_user_DllExport int32_t duration_sec() const;

    /*!
     * @brief This function returns a reference to member duration_sec
     * @return Reference to member duration_sec
     */
    eProsima_user_DllExport int32_t& duration_sec();

    /*!
     * @brief This function sets a value in member duration_nsec
     * @param _duration_nsec New value for member duration_nsec
     */
    eProsima_user_DllExport void duration_nsec(
            int32_t _duration_nsec);

    /*!
     * @brief This function returns the value of member duration_nsec
     * @return Value of member duration_nsec
     */
    eProsima_user_DllExport int32_t duration_nsec() const;

    /*!
     * @brief This function returns a reference to member duration_nsec
     * @return Reference to member duration_nsec
     */
    eProsima_user_DllExport int32_t& duration_nsec();


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
            const TF2RequestDuration& data,
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

    int32_t m_duration_sec;
    int32_t m_duration_nsec;
};
/*!
 * @brief This class represents the enumeration TF2TransformType defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
enum TF2TransformType : uint32_t
{
    kPoseStamped,
    kTransformStamped,
    kPointStamped,
    kPointCloud2
};
/*!
 * @brief This class represents the structure TF2Transform defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
class TF2Transform
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TF2Transform();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TF2Transform();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TF2Transform that will be copied.
     */
    eProsima_user_DllExport TF2Transform(
            const TF2Transform& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TF2Transform that will be copied.
     */
    eProsima_user_DllExport TF2Transform(
            TF2Transform&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TF2Transform that will be copied.
     */
    eProsima_user_DllExport TF2Transform& operator =(
            const TF2Transform& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TF2Transform that will be copied.
     */
    eProsima_user_DllExport TF2Transform& operator =(
            TF2Transform&& x);

    /*!
     * @brief This function sets a value in member type
     * @param _type New value for member type
     */
    eProsima_user_DllExport void type(
            TF2TransformType _type);

    /*!
     * @brief This function returns the value of member type
     * @return Value of member type
     */
    eProsima_user_DllExport TF2TransformType type() const;

    /*!
     * @brief This function returns a reference to member type
     * @return Reference to member type
     */
    eProsima_user_DllExport TF2TransformType& type();

    /*!
     * @brief This function copies the value in member serialized
     * @param _serialized New value to be copied in member serialized
     */
    eProsima_user_DllExport void serialized(
            const std::vector<char>& _serialized);

    /*!
     * @brief This function moves the value in member serialized
     * @param _serialized New value to be moved in member serialized
     */
    eProsima_user_DllExport void serialized(
            std::vector<char>&& _serialized);

    /*!
     * @brief This function returns a constant reference to member serialized
     * @return Constant reference to member serialized
     */
    eProsima_user_DllExport const std::vector<char>& serialized() const;

    /*!
     * @brief This function returns a reference to member serialized
     * @return Reference to member serialized
     */
    eProsima_user_DllExport std::vector<char>& serialized();

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
            const TF2Transform& data,
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

    TF2TransformType m_type;
    std::vector<char> m_serialized;
};
/*!
 * @brief This class represents the structure TF2Request defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
class TF2Request
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TF2Request();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TF2Request();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TF2Request that will be copied.
     */
    eProsima_user_DllExport TF2Request(
            const TF2Request& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TF2Request that will be copied.
     */
    eProsima_user_DllExport TF2Request(
            TF2Request&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TF2Request that will be copied.
     */
    eProsima_user_DllExport TF2Request& operator =(
            const TF2Request& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TF2Request that will be copied.
     */
    eProsima_user_DllExport TF2Request& operator =(
            TF2Request&& x);

    /*!
     * @brief This function copies the value in member request_id
     * @param _request_id New value to be copied in member request_id
     */
    eProsima_user_DllExport void request_id(
            const std::string& _request_id);

    /*!
     * @brief This function moves the value in member request_id
     * @param _request_id New value to be moved in member request_id
     */
    eProsima_user_DllExport void request_id(
            std::string&& _request_id);

    /*!
     * @brief This function returns a constant reference to member request_id
     * @return Constant reference to member request_id
     */
    eProsima_user_DllExport const std::string& request_id() const;

    /*!
     * @brief This function returns a reference to member request_id
     * @return Reference to member request_id
     */
    eProsima_user_DllExport std::string& request_id();
    /*!
     * @brief This function copies the value in member path
     * @param _path New value to be copied in member path
     */
    eProsima_user_DllExport void path(
            const std::string& _path);

    /*!
     * @brief This function moves the value in member path
     * @param _path New value to be moved in member path
     */
    eProsima_user_DllExport void path(
            std::string&& _path);

    /*!
     * @brief This function returns a constant reference to member path
     * @return Constant reference to member path
     */
    eProsima_user_DllExport const std::string& path() const;

    /*!
     * @brief This function returns a reference to member path
     * @return Reference to member path
     */
    eProsima_user_DllExport std::string& path();
    /*!
     * @brief This function copies the value in member source_frame
     * @param _source_frame New value to be copied in member source_frame
     */
    eProsima_user_DllExport void source_frame(
            const std::string& _source_frame);

    /*!
     * @brief This function moves the value in member source_frame
     * @param _source_frame New value to be moved in member source_frame
     */
    eProsima_user_DllExport void source_frame(
            std::string&& _source_frame);

    /*!
     * @brief This function returns a constant reference to member source_frame
     * @return Constant reference to member source_frame
     */
    eProsima_user_DllExport const std::string& source_frame() const;

    /*!
     * @brief This function returns a reference to member source_frame
     * @return Reference to member source_frame
     */
    eProsima_user_DllExport std::string& source_frame();
    /*!
     * @brief This function copies the value in member target_frame
     * @param _target_frame New value to be copied in member target_frame
     */
    eProsima_user_DllExport void target_frame(
            const std::string& _target_frame);

    /*!
     * @brief This function moves the value in member target_frame
     * @param _target_frame New value to be moved in member target_frame
     */
    eProsima_user_DllExport void target_frame(
            std::string&& _target_frame);

    /*!
     * @brief This function returns a constant reference to member target_frame
     * @return Constant reference to member target_frame
     */
    eProsima_user_DllExport const std::string& target_frame() const;

    /*!
     * @brief This function returns a reference to member target_frame
     * @return Reference to member target_frame
     */
    eProsima_user_DllExport std::string& target_frame();
    /*!
     * @brief This function copies the value in member fixed_frame
     * @param _fixed_frame New value to be copied in member fixed_frame
     */
    eProsima_user_DllExport void fixed_frame(
            const std::string& _fixed_frame);

    /*!
     * @brief This function moves the value in member fixed_frame
     * @param _fixed_frame New value to be moved in member fixed_frame
     */
    eProsima_user_DllExport void fixed_frame(
            std::string&& _fixed_frame);

    /*!
     * @brief This function returns a constant reference to member fixed_frame
     * @return Constant reference to member fixed_frame
     */
    eProsima_user_DllExport const std::string& fixed_frame() const;

    /*!
     * @brief This function returns a reference to member fixed_frame
     * @return Reference to member fixed_frame
     */
    eProsima_user_DllExport std::string& fixed_frame();
    /*!
     * @brief This function copies the value in member source_time
     * @param _source_time New value to be copied in member source_time
     */
    eProsima_user_DllExport void source_time(
            const TF2RequestTime& _source_time);

    /*!
     * @brief This function moves the value in member source_time
     * @param _source_time New value to be moved in member source_time
     */
    eProsima_user_DllExport void source_time(
            TF2RequestTime&& _source_time);

    /*!
     * @brief This function returns a constant reference to member source_time
     * @return Constant reference to member source_time
     */
    eProsima_user_DllExport const TF2RequestTime& source_time() const;

    /*!
     * @brief This function returns a reference to member source_time
     * @return Reference to member source_time
     */
    eProsima_user_DllExport TF2RequestTime& source_time();
    /*!
     * @brief This function copies the value in member target_time
     * @param _target_time New value to be copied in member target_time
     */
    eProsima_user_DllExport void target_time(
            const TF2RequestTime& _target_time);

    /*!
     * @brief This function moves the value in member target_time
     * @param _target_time New value to be moved in member target_time
     */
    eProsima_user_DllExport void target_time(
            TF2RequestTime&& _target_time);

    /*!
     * @brief This function returns a constant reference to member target_time
     * @return Constant reference to member target_time
     */
    eProsima_user_DllExport const TF2RequestTime& target_time() const;

    /*!
     * @brief This function returns a reference to member target_time
     * @return Reference to member target_time
     */
    eProsima_user_DllExport TF2RequestTime& target_time();
    /*!
     * @brief This function copies the value in member time
     * @param _time New value to be copied in member time
     */
    eProsima_user_DllExport void time(
            const TF2RequestTime& _time);

    /*!
     * @brief This function moves the value in member time
     * @param _time New value to be moved in member time
     */
    eProsima_user_DllExport void time(
            TF2RequestTime&& _time);

    /*!
     * @brief This function returns a constant reference to member time
     * @return Constant reference to member time
     */
    eProsima_user_DllExport const TF2RequestTime& time() const;

    /*!
     * @brief This function returns a reference to member time
     * @return Reference to member time
     */
    eProsima_user_DllExport TF2RequestTime& time();
    /*!
     * @brief This function copies the value in member duration
     * @param _duration New value to be copied in member duration
     */
    eProsima_user_DllExport void duration(
            const TF2RequestDuration& _duration);

    /*!
     * @brief This function moves the value in member duration
     * @param _duration New value to be moved in member duration
     */
    eProsima_user_DllExport void duration(
            TF2RequestDuration&& _duration);

    /*!
     * @brief This function returns a constant reference to member duration
     * @return Constant reference to member duration
     */
    eProsima_user_DllExport const TF2RequestDuration& duration() const;

    /*!
     * @brief This function returns a reference to member duration
     * @return Reference to member duration
     */
    eProsima_user_DllExport TF2RequestDuration& duration();
    /*!
     * @brief This function copies the value in member transform
     * @param _transform New value to be copied in member transform
     */
    eProsima_user_DllExport void transform(
            const TF2Transform& _transform);

    /*!
     * @brief This function moves the value in member transform
     * @param _transform New value to be moved in member transform
     */
    eProsima_user_DllExport void transform(
            TF2Transform&& _transform);

    /*!
     * @brief This function returns a constant reference to member transform
     * @return Constant reference to member transform
     */
    eProsima_user_DllExport const TF2Transform& transform() const;

    /*!
     * @brief This function returns a reference to member transform
     * @return Reference to member transform
     */
    eProsima_user_DllExport TF2Transform& transform();

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
            const TF2Request& data,
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

    std::string m_request_id;
    std::string m_path;
    std::string m_source_frame;
    std::string m_target_frame;
    std::string m_fixed_frame;
    TF2RequestTime m_source_time;
    TF2RequestTime m_target_time;
    TF2RequestTime m_time;
    TF2RequestDuration m_duration;
    TF2Transform m_transform;
};
/*!
 * @brief This class represents the structure TF2Response defined by the user in the IDL file.
 * @ingroup TF2COMMUNICATION
 */
class TF2Response
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport TF2Response();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~TF2Response();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object TF2Response that will be copied.
     */
    eProsima_user_DllExport TF2Response(
            const TF2Response& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object TF2Response that will be copied.
     */
    eProsima_user_DllExport TF2Response(
            TF2Response&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object TF2Response that will be copied.
     */
    eProsima_user_DllExport TF2Response& operator =(
            const TF2Response& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object TF2Response that will be copied.
     */
    eProsima_user_DllExport TF2Response& operator =(
            TF2Response&& x);

    /*!
     * @brief This function copies the value in member response_id
     * @param _response_id New value to be copied in member response_id
     */
    eProsima_user_DllExport void response_id(
            const std::string& _response_id);

    /*!
     * @brief This function moves the value in member response_id
     * @param _response_id New value to be moved in member response_id
     */
    eProsima_user_DllExport void response_id(
            std::string&& _response_id);

    /*!
     * @brief This function returns a constant reference to member response_id
     * @return Constant reference to member response_id
     */
    eProsima_user_DllExport const std::string& response_id() const;

    /*!
     * @brief This function returns a reference to member response_id
     * @return Reference to member response_id
     */
    eProsima_user_DllExport std::string& response_id();
    /*!
     * @brief This function sets a value in member result
     * @param _result New value for member result
     */
    eProsima_user_DllExport void result(
            bool _result);

    /*!
     * @brief This function returns the value of member result
     * @return Value of member result
     */
    eProsima_user_DllExport bool result() const;

    /*!
     * @brief This function returns a reference to member result
     * @return Reference to member result
     */
    eProsima_user_DllExport bool& result();

    /*!
     * @brief This function copies the value in member transform
     * @param _transform New value to be copied in member transform
     */
    eProsima_user_DllExport void transform(
            const TF2Transform& _transform);

    /*!
     * @brief This function moves the value in member transform
     * @param _transform New value to be moved in member transform
     */
    eProsima_user_DllExport void transform(
            TF2Transform&& _transform);

    /*!
     * @brief This function returns a constant reference to member transform
     * @return Constant reference to member transform
     */
    eProsima_user_DllExport const TF2Transform& transform() const;

    /*!
     * @brief This function returns a reference to member transform
     * @return Reference to member transform
     */
    eProsima_user_DllExport TF2Transform& transform();
    /*!
     * @brief This function copies the value in member error_msg
     * @param _error_msg New value to be copied in member error_msg
     */
    eProsima_user_DllExport void error_msg(
            const std::string& _error_msg);

    /*!
     * @brief This function moves the value in member error_msg
     * @param _error_msg New value to be moved in member error_msg
     */
    eProsima_user_DllExport void error_msg(
            std::string&& _error_msg);

    /*!
     * @brief This function returns a constant reference to member error_msg
     * @return Constant reference to member error_msg
     */
    eProsima_user_DllExport const std::string& error_msg() const;

    /*!
     * @brief This function returns a reference to member error_msg
     * @return Reference to member error_msg
     */
    eProsima_user_DllExport std::string& error_msg();

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
            const TF2Response& data,
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

    std::string m_response_id;
    bool m_result;
    TF2Transform m_transform;
    std::string m_error_msg;
};

#endif // _TF2COMMUNICATION_H_