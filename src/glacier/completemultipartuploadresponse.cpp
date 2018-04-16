/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "completemultipartuploadresponse.h"
#include "completemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/*!
 * \class QtAws::Glacier::CompleteMultipartUploadResponse
 *
 * \brief The CompleteMultipartUploadResponse class encapsulates Glacier CompleteMultipartUpload responses.
 *
 * \ingroup Glacier
 *
 *  Amazon Glacier is a storage solution for "cold
 * 
 *  data.>
 * 
 *  Amazon Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data
 *  backup and archival. With Amazon Glacier, customers can store their data cost effectively for months, years, or decades.
 *  Amazon Glacier also enables customers to offload the administrative burdens of operating and scaling storage to AWS, so
 *  they don't have to worry about capacity planning, hardware provisioning, data replication, hardware failure and
 *  recovery, or time-consuming hardware
 * 
 *  migrations>
 * 
 *  Amazon Glacier is a great storage choice when low storage cost is paramount, your data is rarely retrieved, and
 *  retrieval latency of several hours is acceptable. If your application requires fast or frequent access to your data,
 *  consider using Amazon S3. For more information, see <a href="http://aws.amazon.com/s3/">Amazon Simple Storage Service
 *  (Amazon
 * 
 *  S3)</a>>
 * 
 *  You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 *  Amazon
 * 
 *  Glacier>
 * 
 *  If you are a first-time user of Amazon Glacier, we recommend that you begin by reading the following sections in the
 *  <i>Amazon Glacier Developer
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon Glacier</a> - This
 *  section of the Developer Guide describes the underlying data model, the operations it supports, and the AWS SDKs that
 *  you can use to interact with the
 * 
 *  service> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 *  Amazon Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading archives,
 *  creating jobs to download archives, retrieving the job output, and deleting
 *
 * \sa GlacierClient::completeMultipartUpload
 */

/*!
 * @brief  Constructs a new CompleteMultipartUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteMultipartUploadResponse::CompleteMultipartUploadResponse(
        const CompleteMultipartUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new CompleteMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteMultipartUploadRequest(request));
    setReply(reply);
}

const CompleteMultipartUploadRequest * CompleteMultipartUploadResponse::request() const
{
    Q_D(const CompleteMultipartUploadResponse);
    return static_cast<const CompleteMultipartUploadRequest *>(d->request);
}

/*!
 * @brief  Parse a Glacier CompleteMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void CompleteMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(CompleteMultipartUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CompleteMultipartUploadResponsePrivate
 *
 * \brief Private implementation for CompleteMultipartUploadResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CompleteMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteMultipartUploadResponse instance.
 */
CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponsePrivate(
    CompleteMultipartUploadResponse * const q) : GlacierResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glacier CompleteMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteMultipartUploadResponsePrivate::parseCompleteMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMultipartUploadResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
