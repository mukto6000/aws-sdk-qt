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

#include "committransactionresponse.h"
#include "committransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CommitTransactionResponse
 * \brief The CommitTransactionResponse class provides an interace for LakeFormation CommitTransaction responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::commitTransaction
 */

/*!
 * Constructs a CommitTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
CommitTransactionResponse::CommitTransactionResponse(
        const CommitTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new CommitTransactionResponsePrivate(this), parent)
{
    setRequest(new CommitTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CommitTransactionRequest * CommitTransactionResponse::request() const
{
    Q_D(const CommitTransactionResponse);
    return static_cast<const CommitTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation CommitTransaction \a response.
 */
void CommitTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CommitTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::CommitTransactionResponsePrivate
 * \brief The CommitTransactionResponsePrivate class provides private implementation for CommitTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CommitTransactionResponsePrivate object with public implementation \a q.
 */
CommitTransactionResponsePrivate::CommitTransactionResponsePrivate(
    CommitTransactionResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation CommitTransaction response element from \a xml.
 */
void CommitTransactionResponsePrivate::parseCommitTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CommitTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
