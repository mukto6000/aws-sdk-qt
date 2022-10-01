// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlocationsresponse.h"
#include "listlocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListLocationsResponse
 * \brief The ListLocationsResponse class provides an interace for DataSync ListLocations responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::listLocations
 */

/*!
 * Constructs a ListLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLocationsResponse::ListLocationsResponse(
        const ListLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListLocationsResponsePrivate(this), parent)
{
    setRequest(new ListLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLocationsRequest * ListLocationsResponse::request() const
{
    Q_D(const ListLocationsResponse);
    return static_cast<const ListLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListLocations \a response.
 */
void ListLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListLocationsResponsePrivate
 * \brief The ListLocationsResponsePrivate class provides private implementation for ListLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListLocationsResponsePrivate object with public implementation \a q.
 */
ListLocationsResponsePrivate::ListLocationsResponsePrivate(
    ListLocationsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListLocations response element from \a xml.
 */
void ListLocationsResponsePrivate::parseListLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
