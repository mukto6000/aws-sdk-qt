// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourcepolicyresponse.h"
#include "updateresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateResourcePolicyResponse
 * \brief The UpdateResourcePolicyResponse class provides an interace for LexModelsV2 UpdateResourcePolicy responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateResourcePolicy
 */

/*!
 * Constructs a UpdateResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourcePolicyResponse::UpdateResourcePolicyResponse(
        const UpdateResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourcePolicyRequest * UpdateResourcePolicyResponse::request() const
{
    Q_D(const UpdateResourcePolicyResponse);
    return static_cast<const UpdateResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateResourcePolicy \a response.
 */
void UpdateResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateResourcePolicyResponsePrivate
 * \brief The UpdateResourcePolicyResponsePrivate class provides private implementation for UpdateResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateResourcePolicyResponsePrivate object with public implementation \a q.
 */
UpdateResourcePolicyResponsePrivate::UpdateResourcePolicyResponsePrivate(
    UpdateResourcePolicyResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateResourcePolicy response element from \a xml.
 */
void UpdateResourcePolicyResponsePrivate::parseUpdateResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
