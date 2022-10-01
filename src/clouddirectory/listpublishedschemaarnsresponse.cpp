// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpublishedschemaarnsresponse.h"
#include "listpublishedschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListPublishedSchemaArnsResponse
 * \brief The ListPublishedSchemaArnsResponse class provides an interace for CloudDirectory ListPublishedSchemaArns responses.
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
 * \sa CloudDirectoryClient::listPublishedSchemaArns
 */

/*!
 * Constructs a ListPublishedSchemaArnsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPublishedSchemaArnsResponse::ListPublishedSchemaArnsResponse(
        const ListPublishedSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListPublishedSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListPublishedSchemaArnsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPublishedSchemaArnsRequest * ListPublishedSchemaArnsResponse::request() const
{
    Q_D(const ListPublishedSchemaArnsResponse);
    return static_cast<const ListPublishedSchemaArnsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListPublishedSchemaArns \a response.
 */
void ListPublishedSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPublishedSchemaArnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListPublishedSchemaArnsResponsePrivate
 * \brief The ListPublishedSchemaArnsResponsePrivate class provides private implementation for ListPublishedSchemaArnsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListPublishedSchemaArnsResponsePrivate object with public implementation \a q.
 */
ListPublishedSchemaArnsResponsePrivate::ListPublishedSchemaArnsResponsePrivate(
    ListPublishedSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListPublishedSchemaArns response element from \a xml.
 */
void ListPublishedSchemaArnsResponsePrivate::parseListPublishedSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublishedSchemaArnsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
