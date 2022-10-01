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

#include "decreasereplicationfactorresponse.h"
#include "decreasereplicationfactorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorResponse
 * \brief The DecreaseReplicationFactorResponse class provides an interace for Dax DecreaseReplicationFactor responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::decreaseReplicationFactor
 */

/*!
 * Constructs a DecreaseReplicationFactorResponse object for \a reply to \a request, with parent \a parent.
 */
DecreaseReplicationFactorResponse::DecreaseReplicationFactorResponse(
        const DecreaseReplicationFactorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DecreaseReplicationFactorResponsePrivate(this), parent)
{
    setRequest(new DecreaseReplicationFactorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecreaseReplicationFactorRequest * DecreaseReplicationFactorResponse::request() const
{
    Q_D(const DecreaseReplicationFactorResponse);
    return static_cast<const DecreaseReplicationFactorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DecreaseReplicationFactor \a response.
 */
void DecreaseReplicationFactorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecreaseReplicationFactorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DecreaseReplicationFactorResponsePrivate
 * \brief The DecreaseReplicationFactorResponsePrivate class provides private implementation for DecreaseReplicationFactorResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DecreaseReplicationFactorResponsePrivate object with public implementation \a q.
 */
DecreaseReplicationFactorResponsePrivate::DecreaseReplicationFactorResponsePrivate(
    DecreaseReplicationFactorResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DecreaseReplicationFactor response element from \a xml.
 */
void DecreaseReplicationFactorResponsePrivate::parseDecreaseReplicationFactorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseReplicationFactorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
