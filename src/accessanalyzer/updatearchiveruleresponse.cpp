// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatearchiveruleresponse.h"
#include "updatearchiveruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::UpdateArchiveRuleResponse
 * \brief The UpdateArchiveRuleResponse class provides an interace for AccessAnalyzer UpdateArchiveRule responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  Identity and Access Management Access Analyzer helps identify potential resource-access risks by enabling you to
 *  identify any policies that grant access to an external principal. It does this by using logic-based reasoning to analyze
 *  resource-based policies in your Amazon Web Services environment. An external principal can be another Amazon Web
 *  Services account, a root user, an IAM user or role, a federated user, an Amazon Web Services service, or an anonymous
 *  user. You can also use IAM Access Analyzer to preview and validate public and cross-account access to your resources
 *  before deploying permissions changes. This guide describes the Identity and Access Management Access Analyzer operations
 *  that you can call programmatically. For general information about IAM Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">Identity and Access Management
 *  Access Analyzer</a> in the <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using IAM Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::updateArchiveRule
 */

/*!
 * Constructs a UpdateArchiveRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateArchiveRuleResponse::UpdateArchiveRuleResponse(
        const UpdateArchiveRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccessAnalyzerResponse(new UpdateArchiveRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateArchiveRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateArchiveRuleRequest * UpdateArchiveRuleResponse::request() const
{
    Q_D(const UpdateArchiveRuleResponse);
    return static_cast<const UpdateArchiveRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AccessAnalyzer UpdateArchiveRule \a response.
 */
void UpdateArchiveRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateArchiveRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AccessAnalyzer::UpdateArchiveRuleResponsePrivate
 * \brief The UpdateArchiveRuleResponsePrivate class provides private implementation for UpdateArchiveRuleResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a UpdateArchiveRuleResponsePrivate object with public implementation \a q.
 */
UpdateArchiveRuleResponsePrivate::UpdateArchiveRuleResponsePrivate(
    UpdateArchiveRuleResponse * const q) : AccessAnalyzerResponsePrivate(q)
{

}

/*!
 * Parses a AccessAnalyzer UpdateArchiveRule response element from \a xml.
 */
void UpdateArchiveRuleResponsePrivate::parseUpdateArchiveRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateArchiveRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AccessAnalyzer
} // namespace QtAws
