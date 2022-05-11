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
 * @file TF2CommunicationPubSubTypes.cpp
 * This header file contains the implementation of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "TF2CommunicationPubSubTypes.h"

using SerializedPayload_t = eprosima::fastrtps::rtps::SerializedPayload_t;
using InstanceHandle_t = eprosima::fastrtps::rtps::InstanceHandle_t;

TF2RequestTimePubSubType::TF2RequestTimePubSubType()
{
    setName("TF2RequestTime");
    m_typeSize = static_cast<uint32_t>(TF2RequestTime::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = TF2RequestTime::isKeyDefined();
    size_t keyLength = TF2RequestTime::getKeyMaxCdrSerializedSize() > 16 ?
            TF2RequestTime::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

TF2RequestTimePubSubType::~TF2RequestTimePubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool TF2RequestTimePubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TF2RequestTime* p_type = static_cast<TF2RequestTime*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool TF2RequestTimePubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    //Convert DATA to pointer of your type
    TF2RequestTime* p_type = static_cast<TF2RequestTime*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

    // Object that deserializes the data.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> TF2RequestTimePubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<TF2RequestTime*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* TF2RequestTimePubSubType::createData()
{
    return reinterpret_cast<void*>(new TF2RequestTime());
}

void TF2RequestTimePubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<TF2RequestTime*>(data));
}

bool TF2RequestTimePubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    TF2RequestTime* p_type = static_cast<TF2RequestTime*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            TF2RequestTime::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || TF2RequestTime::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

TF2RequestDurationPubSubType::TF2RequestDurationPubSubType()
{
    setName("TF2RequestDuration");
    m_typeSize = static_cast<uint32_t>(TF2RequestDuration::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = TF2RequestDuration::isKeyDefined();
    size_t keyLength = TF2RequestDuration::getKeyMaxCdrSerializedSize() > 16 ?
            TF2RequestDuration::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

TF2RequestDurationPubSubType::~TF2RequestDurationPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool TF2RequestDurationPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TF2RequestDuration* p_type = static_cast<TF2RequestDuration*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool TF2RequestDurationPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    //Convert DATA to pointer of your type
    TF2RequestDuration* p_type = static_cast<TF2RequestDuration*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

    // Object that deserializes the data.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> TF2RequestDurationPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<TF2RequestDuration*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* TF2RequestDurationPubSubType::createData()
{
    return reinterpret_cast<void*>(new TF2RequestDuration());
}

void TF2RequestDurationPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<TF2RequestDuration*>(data));
}

bool TF2RequestDurationPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    TF2RequestDuration* p_type = static_cast<TF2RequestDuration*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            TF2RequestDuration::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || TF2RequestDuration::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}


TF2TransformPubSubType::TF2TransformPubSubType()
{
    setName("TF2Transform");
    m_typeSize = static_cast<uint32_t>(TF2Transform::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = TF2Transform::isKeyDefined();
    size_t keyLength = TF2Transform::getKeyMaxCdrSerializedSize() > 16 ?
            TF2Transform::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

TF2TransformPubSubType::~TF2TransformPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool TF2TransformPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TF2Transform* p_type = static_cast<TF2Transform*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool TF2TransformPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    //Convert DATA to pointer of your type
    TF2Transform* p_type = static_cast<TF2Transform*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

    // Object that deserializes the data.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> TF2TransformPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<TF2Transform*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* TF2TransformPubSubType::createData()
{
    return reinterpret_cast<void*>(new TF2Transform());
}

void TF2TransformPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<TF2Transform*>(data));
}

bool TF2TransformPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    TF2Transform* p_type = static_cast<TF2Transform*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            TF2Transform::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || TF2Transform::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

TF2RequestPubSubType::TF2RequestPubSubType()
{
    setName("TF2Request");
    m_typeSize = static_cast<uint32_t>(TF2Request::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = TF2Request::isKeyDefined();
    size_t keyLength = TF2Request::getKeyMaxCdrSerializedSize() > 16 ?
            TF2Request::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

TF2RequestPubSubType::~TF2RequestPubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool TF2RequestPubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TF2Request* p_type = static_cast<TF2Request*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool TF2RequestPubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    //Convert DATA to pointer of your type
    TF2Request* p_type = static_cast<TF2Request*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

    // Object that deserializes the data.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> TF2RequestPubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<TF2Request*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* TF2RequestPubSubType::createData()
{
    return reinterpret_cast<void*>(new TF2Request());
}

void TF2RequestPubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<TF2Request*>(data));
}

bool TF2RequestPubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    TF2Request* p_type = static_cast<TF2Request*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            TF2Request::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || TF2Request::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

TF2ResponsePubSubType::TF2ResponsePubSubType()
{
    setName("TF2Response");
    m_typeSize = static_cast<uint32_t>(TF2Response::getMaxCdrSerializedSize()) + 4 /*encapsulation*/;
    m_isGetKeyDefined = TF2Response::isKeyDefined();
    size_t keyLength = TF2Response::getKeyMaxCdrSerializedSize() > 16 ?
            TF2Response::getKeyMaxCdrSerializedSize() : 16;
    m_keyBuffer = reinterpret_cast<unsigned char*>(malloc(keyLength));
    memset(m_keyBuffer, 0, keyLength);
}

TF2ResponsePubSubType::~TF2ResponsePubSubType()
{
    if (m_keyBuffer != nullptr)
    {
        free(m_keyBuffer);
    }
}

bool TF2ResponsePubSubType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TF2Response* p_type = static_cast<TF2Response*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->max_size);
    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();

    try
    {
        // Serialize the object.
        p_type->serialize(ser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    // Get the serialized length
    payload->length = static_cast<uint32_t>(ser.getSerializedDataLength());
    return true;
}

bool TF2ResponsePubSubType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    //Convert DATA to pointer of your type
    TF2Response* p_type = static_cast<TF2Response*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(payload->data), payload->length);

    // Object that deserializes the data.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN, eprosima::fastcdr::Cdr::DDS_CDR);

    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    try
    {
        // Deserialize the object.
        p_type->deserialize(deser);
    }
    catch (eprosima::fastcdr::exception::NotEnoughMemoryException& /*exception*/)
    {
        return false;
    }

    return true;
}

std::function<uint32_t()> TF2ResponsePubSubType::getSerializedSizeProvider(
        void* data)
{
    return [data]() -> uint32_t
           {
               return static_cast<uint32_t>(type::getCdrSerializedSize(*static_cast<TF2Response*>(data))) +
                      4u /*encapsulation*/;
           };
}

void* TF2ResponsePubSubType::createData()
{
    return reinterpret_cast<void*>(new TF2Response());
}

void TF2ResponsePubSubType::deleteData(
        void* data)
{
    delete(reinterpret_cast<TF2Response*>(data));
}

bool TF2ResponsePubSubType::getKey(
        void* data,
        InstanceHandle_t* handle,
        bool force_md5)
{
    if (!m_isGetKeyDefined)
    {
        return false;
    }

    TF2Response* p_type = static_cast<TF2Response*>(data);

    // Object that manages the raw buffer.
    eprosima::fastcdr::FastBuffer fastbuffer(reinterpret_cast<char*>(m_keyBuffer),
            TF2Response::getKeyMaxCdrSerializedSize());

    // Object that serializes the data.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS);
    p_type->serializeKey(ser);
    if (force_md5 || TF2Response::getKeyMaxCdrSerializedSize() > 16)
    {
        m_md5.init();
        m_md5.update(m_keyBuffer, static_cast<unsigned int>(ser.getSerializedDataLength()));
        m_md5.finalize();
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_md5.digest[i];
        }
    }
    else
    {
        for (uint8_t i = 0; i < 16; ++i)
        {
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

