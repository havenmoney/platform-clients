/**
 * Haven Money API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "HttpContent.h"

namespace dev {
namespace haven {
namespace client {
namespace model {

HttpContent::HttpContent()
{
}

HttpContent::~HttpContent()
{
}

utility::string_t HttpContent::getContentDisposition()
{
    return m_ContentDisposition;
}

void HttpContent::setContentDisposition( const utility::string_t & value )
{
    m_ContentDisposition = value;
}

utility::string_t HttpContent::getName()
{
    return m_Name;
}

void HttpContent::setName( const utility::string_t & value )
{
    m_Name = value;
}

utility::string_t HttpContent::getFileName()
{
    return m_FileName;
}

void HttpContent::setFileName( const utility::string_t & value )
{
    m_FileName = value;
}

utility::string_t HttpContent::getContentType()
{
    return m_ContentType;
}

void HttpContent::setContentType( const utility::string_t & value )
{
    m_ContentType = value;
}

std::shared_ptr<std::istream> HttpContent::getData()
{
    return m_Data;
}

void HttpContent::setData( std::shared_ptr<std::istream> value )
{
    m_Data = value;
}

void HttpContent::writeTo( std::ostream& stream )
{
    m_Data->seekg( 0, m_Data->beg );
    stream << m_Data->rdbuf();
}

}
}
}
}
