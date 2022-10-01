// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchreadresponse.h"
#include "batchreadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::BatchReadResponse
 * \brief The BatchReadResponse class provides an interace for CloudDirectory BatchRead responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::batchRead
 */

/*!
 * Constructs a BatchReadResponse object for \a reply to \a request, with parent \a parent.
 */
BatchReadResponse::BatchReadResponse(
        const BatchReadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new BatchReadResponsePrivate(this), parent)
{
    setRequest(new BatchReadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchReadRequest * BatchReadResponse::request() const
{
    Q_D(const BatchReadResponse);
    return static_cast<const BatchReadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory BatchRead \a response.
 */
void BatchReadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchReadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::BatchReadResponsePrivate
 * \brief The BatchReadResponsePrivate class provides private implementation for BatchReadResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a BatchReadResponsePrivate object with public implementation \a q.
 */
BatchReadResponsePrivate::BatchReadResponsePrivate(
    BatchReadResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory BatchRead response element from \a xml.
 */
void BatchReadResponsePrivate::parseBatchReadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchReadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
