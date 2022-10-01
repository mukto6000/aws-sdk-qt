// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachtoindexresponse.h"
#include "attachtoindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AttachToIndexResponse
 * \brief The AttachToIndexResponse class provides an interace for CloudDirectory AttachToIndex responses.
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
 * \sa CloudDirectoryClient::attachToIndex
 */

/*!
 * Constructs a AttachToIndexResponse object for \a reply to \a request, with parent \a parent.
 */
AttachToIndexResponse::AttachToIndexResponse(
        const AttachToIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachToIndexResponsePrivate(this), parent)
{
    setRequest(new AttachToIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachToIndexRequest * AttachToIndexResponse::request() const
{
    Q_D(const AttachToIndexResponse);
    return static_cast<const AttachToIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory AttachToIndex \a response.
 */
void AttachToIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachToIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::AttachToIndexResponsePrivate
 * \brief The AttachToIndexResponsePrivate class provides private implementation for AttachToIndexResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AttachToIndexResponsePrivate object with public implementation \a q.
 */
AttachToIndexResponsePrivate::AttachToIndexResponsePrivate(
    AttachToIndexResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory AttachToIndex response element from \a xml.
 */
void AttachToIndexResponsePrivate::parseAttachToIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachToIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
