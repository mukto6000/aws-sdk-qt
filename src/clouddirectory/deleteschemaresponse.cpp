// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaresponse.h"
#include "deleteschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::DeleteSchemaResponse
 * \brief The DeleteSchemaResponse class provides an interace for CloudDirectory DeleteSchema responses.
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
 * \sa CloudDirectoryClient::deleteSchema
 */

/*!
 * Constructs a DeleteSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaResponse::DeleteSchemaResponse(
        const DeleteSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteSchemaResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaRequest * DeleteSchemaResponse::request() const
{
    Q_D(const DeleteSchemaResponse);
    return static_cast<const DeleteSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory DeleteSchema \a response.
 */
void DeleteSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::DeleteSchemaResponsePrivate
 * \brief The DeleteSchemaResponsePrivate class provides private implementation for DeleteSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a DeleteSchemaResponsePrivate object with public implementation \a q.
 */
DeleteSchemaResponsePrivate::DeleteSchemaResponsePrivate(
    DeleteSchemaResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory DeleteSchema response element from \a xml.
 */
void DeleteSchemaResponsePrivate::parseDeleteSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
