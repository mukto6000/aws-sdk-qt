/*
    Copyright 2013-2020 Paul Colby

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

#include "updatedestinationresponse.h"
#include "updatedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UpdateDestinationResponse
 * \brief The UpdateDestinationResponse class provides an interace for Firehose UpdateDestination responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::updateDestination
 */

/*!
 * Constructs a UpdateDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDestinationResponse::UpdateDestinationResponse(
        const UpdateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new UpdateDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDestinationRequest * UpdateDestinationResponse::request() const
{
    Q_D(const UpdateDestinationResponse);
    return static_cast<const UpdateDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose UpdateDestination \a response.
 */
void UpdateDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::UpdateDestinationResponsePrivate
 * \brief The UpdateDestinationResponsePrivate class provides private implementation for UpdateDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a UpdateDestinationResponsePrivate object with public implementation \a q.
 */
UpdateDestinationResponsePrivate::UpdateDestinationResponsePrivate(
    UpdateDestinationResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose UpdateDestination response element from \a xml.
 */
void UpdateDestinationResponsePrivate::parseUpdateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
