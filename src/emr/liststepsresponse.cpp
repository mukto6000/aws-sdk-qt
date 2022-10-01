/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "liststepsresponse.h"
#include "liststepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStepsResponse
 * \brief The ListStepsResponse class provides an interace for Emr ListSteps responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSteps
 */

/*!
 * Constructs a ListStepsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStepsResponse::ListStepsResponse(
        const ListStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStepsResponsePrivate(this), parent)
{
    setRequest(new ListStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStepsRequest * ListStepsResponse::request() const
{
    Q_D(const ListStepsResponse);
    return static_cast<const ListStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListSteps \a response.
 */
void ListStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListStepsResponsePrivate
 * \brief The ListStepsResponsePrivate class provides private implementation for ListStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStepsResponsePrivate object with public implementation \a q.
 */
ListStepsResponsePrivate::ListStepsResponsePrivate(
    ListStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListSteps response element from \a xml.
 */
void ListStepsResponsePrivate::parseListStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
