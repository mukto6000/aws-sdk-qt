// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinvitationsresponse.h"
#include "deleteinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteInvitationsResponse
 * \brief The DeleteInvitationsResponse class provides an interace for Macie2 DeleteInvitations responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteInvitations
 */

/*!
 * Constructs a DeleteInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInvitationsResponse::DeleteInvitationsResponse(
        const DeleteInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new DeleteInvitationsResponsePrivate(this), parent)
{
    setRequest(new DeleteInvitationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInvitationsRequest * DeleteInvitationsResponse::request() const
{
    Q_D(const DeleteInvitationsResponse);
    return static_cast<const DeleteInvitationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 DeleteInvitations \a response.
 */
void DeleteInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::DeleteInvitationsResponsePrivate
 * \brief The DeleteInvitationsResponsePrivate class provides private implementation for DeleteInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteInvitationsResponsePrivate object with public implementation \a q.
 */
DeleteInvitationsResponsePrivate::DeleteInvitationsResponsePrivate(
    DeleteInvitationsResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 DeleteInvitations response element from \a xml.
 */
void DeleteInvitationsResponsePrivate::parseDeleteInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInvitationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
