// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectpoliciesresponse.h"
#include "listobjectpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectPoliciesResponse
 * \brief The ListObjectPoliciesResponse class provides an interace for CloudDirectory ListObjectPolicies responses.
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
 * \sa CloudDirectoryClient::listObjectPolicies
 */

/*!
 * Constructs a ListObjectPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListObjectPoliciesResponse::ListObjectPoliciesResponse(
        const ListObjectPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListObjectPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListObjectPoliciesRequest * ListObjectPoliciesResponse::request() const
{
    Q_D(const ListObjectPoliciesResponse);
    return static_cast<const ListObjectPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListObjectPolicies \a response.
 */
void ListObjectPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListObjectPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListObjectPoliciesResponsePrivate
 * \brief The ListObjectPoliciesResponsePrivate class provides private implementation for ListObjectPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectPoliciesResponsePrivate object with public implementation \a q.
 */
ListObjectPoliciesResponsePrivate::ListObjectPoliciesResponsePrivate(
    ListObjectPoliciesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListObjectPolicies response element from \a xml.
 */
void ListObjectPoliciesResponsePrivate::parseListObjectPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws
