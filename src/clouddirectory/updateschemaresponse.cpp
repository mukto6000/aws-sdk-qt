// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateschemaresponse.h"
#include "updateschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateSchemaResponse
 * \brief The UpdateSchemaResponse class provides an interace for CloudDirectory UpdateSchema responses.
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
 * \sa CloudDirectoryClient::updateSchema
 */

/*!
 * Constructs a UpdateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSchemaResponse::UpdateSchemaResponse(
        const UpdateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateSchemaResponsePrivate(this), parent)
{
    setRequest(new UpdateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSchemaRequest * UpdateSchemaResponse::request() const
{
    Q_D(const UpdateSchemaResponse);
    return static_cast<const UpdateSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory UpdateSchema \a response.
 */
void UpdateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::UpdateSchemaResponsePrivate
 * \brief The UpdateSchemaResponsePrivate class provides private implementation for UpdateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateSchemaResponsePrivate object with public implementation \a q.
 */
UpdateSchemaResponsePrivate::UpdateSchemaResponsePrivate(
    UpdateSchemaResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory UpdateSchema response element from \a xml.
 */
void UpdateSchemaResponsePrivate::parseUpdateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
